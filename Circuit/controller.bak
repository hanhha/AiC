EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:relays
LIBS:open-project
LIBS:pspice
LIBS:CAS-cache
EELAYER 25 0
EELAYER END
$Descr A 11000 8500
encoding utf-8
Sheet 5 6
Title "Power management unit"
Date "2016-07-30"
Rev "1"
Comp ""
Comment1 "Power path"
Comment2 ""
Comment3 "HMTH(c)"
Comment4 ""
$EndDescr
$Comp
L ATTINY13A-P IC1
U 1 1 57A75A7A
P 5900 4150
F 0 "IC1" H 5100 4550 50  0000 C CNN
F 1 "ATTINY13A-P" H 6550 3750 50  0000 C CNN
F 2 "DIP8" H 6550 4150 50  0000 C CIN
F 3 "" H 5100 4500 50  0000 C CNN
	1    5900 4150
	1    0    0    -1  
$EndComp
$Comp
L +BATT #PWR023
U 1 1 57A75A7B
P 7250 3500
F 0 "#PWR023" H 7250 3350 50  0001 C CNN
F 1 "+BATT" H 7250 3640 50  0000 C CNN
F 2 "" H 7250 3500 50  0000 C CNN
F 3 "" H 7250 3500 50  0000 C CNN
	1    7250 3500
	1    0    0    -1  
$EndComp
NoConn ~ 4900 4400
$Comp
L PWR_FLAG #FLG024
U 1 1 57A75A7D
P 7000 4250
F 0 "#FLG024" H 7000 4345 50  0001 C CNN
F 1 "PWR_FLAG" H 7000 4430 50  0000 C CNN
F 2 "" H 7000 4250 50  0000 C CNN
F 3 "" H 7000 4250 50  0000 C CNN
	1    7000 4250
	1    0    0    -1  
$EndComp
Wire Wire Line
	6900 3900 7250 3900
Wire Wire Line
	7250 3900 7250 3500
Wire Wire Line
	4450 3650 4800 3650
Wire Wire Line
	4800 3650 4800 3900
Wire Wire Line
	4800 3900 4900 3900
Wire Wire Line
	4450 3850 4700 3850
Wire Wire Line
	4700 3850 4700 4000
Wire Wire Line
	4700 4000 4900 4000
Wire Wire Line
	4900 4100 4600 4100
Wire Wire Line
	4600 4100 4600 4050
Wire Wire Line
	4600 4050 4450 4050
Wire Wire Line
	4900 4200 4600 4200
Wire Wire Line
	4600 4200 4600 4250
Wire Wire Line
	4600 4250 4450 4250
Wire Wire Line
	4900 4300 4700 4300
Wire Wire Line
	4700 4300 4700 4450
Wire Wire Line
	4700 4450 4450 4450
Wire Wire Line
	6900 4400 7100 4400
Wire Wire Line
	7000 4250 7000 4400
Connection ~ 7000 4400
Text HLabel 4450 3650 0    60   Input ~ 0
online_sts
Text HLabel 4450 3850 0    60   Input ~ 0
main_online
Text HLabel 4450 4050 0    60   Output ~ 0
pwrdwn_en
Text HLabel 4450 4250 0    60   Output ~ 0
power_en
Text HLabel 4450 4450 0    60   Output ~ 0
shutdown_en
Text HLabel 7100 4400 2    60   Output ~ 0
GND_REF
$EndSCHEMATC
