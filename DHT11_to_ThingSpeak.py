"""
Temperature/Humidity Light monitor using Raspberry Pi, DHT11
Data is displayed at thingspeak.com
"""
# Import all the libraries we need to run
import sys
import RPi.GPIO as GPIO
import os
from time import sleep, strftime

import Adafruit_DHT
import urllib2


DEBUG = 1
# Setup the pins we are connect to
DHTpin = 23

#Setup our API and delay
execfile("DHT11_to_ThingSpeak_cfg.py")

GPIO.setmode(GPIO.BCM)

# main() function
def main():
    
    print 'starting...'

    baseURL = 'https://api.thingspeak.com/update?api_key=%s' % myAPI
    print baseURL
    
    sensor_wdt_max = 10
    clould_wdt_max = 10
    sensor_wdt = 0
    cloud_wdt = 0
    sensor_failed = False
    cloud_failed = False

    while True:
    	humid, temp = Adafruit_DHT.read_retry(Adafruit_DHT.DHT11, DHTpin)
	if humid is not None and temp is not None:
            sensor_wdt = 0
            sensor_failed = False
	    print strftime("%Y-%m-%d %H:%M:%S"),'Temp={0:0.1f}*C  Humidity={1:0.1f}%'.format(temp, humid)
            try:
                f = urllib2.urlopen(baseURL + 
                            "&field1=%s&field2=%s" % (temp, humid))
                print f.read()
                f.close()
            except:
                e = sys.exc_info()[0]
                print "Uploading failed with exception",e,". Will try next iteration ..."
                if (cloud_failed == True):
                    cloud_wdt = cloud_wdt + 1
                cloud_failed = True
            
            if (cloud_failed == False):
                cloud_wdt = 0
            else:
                if (cloud_wdt > clould_wdt_max):
                    print "There is server issue. Exiting ..."
                    break

            sleep(int(myDelay))
        else:
            print "Getting data from sensor failed. Will try next iteration ..."
            if (sensor_failed == True):
                sensor_wdt = sensor_wdt + 1
            sensor_failed = True
            if (sensor_wdt > sensor_wdt_max):
                print 'Can not getting data from sensor. Exiting ...'
                break

# call main
if __name__ == '__main__':
    main()
