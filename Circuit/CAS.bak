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
$Descr A4 11693 8268
encoding utf-8
Sheet 1 6
Title "Power management unit"
Date "2016-07-30"
Rev "1"
Comp ""
Comment1 "Power path"
Comment2 ""
Comment3 "HMTH(c)"
Comment4 ""
$EndDescr
$Sheet
S 6900 1850 1150 850 
U 57A735B5
F0 "power_rpi" 60
F1 "power_rpi.sch" 60
F2 "power_en" I L 6900 2300 60 
$EndSheet
$Sheet
S 3150 1800 1200 900 
U 57A741CB
F0 "battery_io" 60
F1 "battery_io.sch" 60
F2 "main_online" O R 4350 2250 60 
$EndSheet
$Sheet
S 4850 1800 950  800 
U 57A74B1D
F0 "self_cut" 60
F1 "self_cut.sch" 60
F2 "pwrdwn_en" I L 4850 2350 60 
F3 "main_online" I L 4850 2000 60 
F4 "GND_REF" O R 5800 2200 60 
$EndSheet
$Sheet
S 4850 3200 1200 600 
U 57A75776
F0 "controller" 60
F1 "controller.sch" 60
F2 "online_sts" I R 6050 3300 60 
F3 "main_online" I L 4850 3400 60 
F4 "pwrdwn_en" O L 4850 3550 60 
F5 "power_en" O R 6050 3450 60 
F6 "shutdown_en" O R 6050 3600 60 
F7 "GND_REF" O R 6050 3750 60 
$EndSheet
$Sheet
S 6900 3200 750  450 
U 57A75788
F0 "if" 60
F1 "if.sch" 60
F2 "online_sts" O L 6900 3350 60 
F3 "shutdown_en" I L 6900 3500 60 
$EndSheet
Wire Wire Line
	4300 2250 4500 2250
Wire Wire Line
	4500 2000 4500 3400
Wire Wire Line
	4500 2000 4850 2000
Wire Wire Line
	4500 3400 4850 3400
Wire Wire Line
	4850 2350 4650 2350
Wire Wire Line
	4650 2350 4650 3550
Wire Wire Line
	4650 3550 4850 3550
Wire Wire Line
	6900 3350 6400 3350
Wire Wire Line
	6400 3350 6400 3300
Wire Wire Line
	6400 3300 6050 3300
Wire Wire Line
	6050 3600 6600 3600
Wire Wire Line
	6600 3600 6600 3500
Wire Wire Line
	6600 3500 6900 3500
Wire Wire Line
	6050 3450 6300 3450
Wire Wire Line
	6300 3450 6300 2300
Wire Wire Line
	6300 2300 6900 2300
Wire Wire Line
	5800 2200 6200 2200
Wire Wire Line
	6200 2200 6200 3750
Wire Wire Line
	6200 3750 6050 3750
$EndSCHEMATC
