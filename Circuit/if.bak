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
Sheet 6 6
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
L GND #PWR025
U 1 1 57A76546
P 4050 3300
F 0 "#PWR025" H 4050 3050 50  0001 C CNN
F 1 "GND" H 4050 3150 50  0000 C CNN
F 2 "" H 4050 3300 50  0000 C CNN
F 3 "" H 4050 3300 50  0000 C CNN
	1    4050 3300
	1    0    0    -1  
$EndComp
$Comp
L R R11
U 1 1 57A76547
P 4050 2900
F 0 "R11" V 4130 2900 50  0000 C CNN
F 1 "1K" V 4050 2900 50  0000 C CNN
F 2 "" V 3980 2900 50  0000 C CNN
F 3 "" H 4050 2900 50  0000 C CNN
	1    4050 2900
	1    0    0    -1  
$EndComp
$Comp
L R R12
U 1 1 57A76548
P 4450 3800
F 0 "R12" V 4530 3800 50  0000 C CNN
F 1 "100" V 4450 3800 50  0000 C CNN
F 2 "" V 4380 3800 50  0000 C CNN
F 3 "" H 4450 3800 50  0000 C CNN
	1    4450 3800
	-1   0    0    1   
$EndComp
$Comp
L R R13
U 1 1 57A76549
P 4450 4200
F 0 "R13" V 4530 4200 50  0000 C CNN
F 1 "200" V 4450 4200 50  0000 C CNN
F 2 "" V 4380 4200 50  0000 C CNN
F 3 "" H 4450 4200 50  0000 C CNN
	1    4450 4200
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR026
U 1 1 57A7654A
P 4450 4450
F 0 "#PWR026" H 4450 4200 50  0001 C CNN
F 1 "GND" H 4450 4300 50  0000 C CNN
F 2 "" H 4450 4450 50  0000 C CNN
F 3 "" H 4450 4450 50  0000 C CNN
	1    4450 4450
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P7
U 1 1 57A7654D
P 4450 5100
F 0 "P7" H 4450 5250 50  0000 C CNN
F 1 "rpi_gpio" V 4550 5100 50  0000 C CNN
F 2 "" H 4450 5100 50  0000 C CNN
F 3 "" H 4450 5100 50  0000 C CNN
	1    4450 5100
	1    0    0    -1  
$EndComp
Text HLabel 4800 2600 2    60   Output ~ 0
online_sts
Text HLabel 3850 3550 0    60   Input ~ 0
shutdown_en
Wire Wire Line
	3700 2250 4050 2250
Wire Wire Line
	4050 2250 4050 2750
Wire Wire Line
	4050 3050 4050 3300
Wire Wire Line
	4800 2600 4050 2600
Connection ~ 4050 2600
Wire Wire Line
	4450 3950 4450 4050
Wire Wire Line
	3850 3550 4450 3550
Wire Wire Line
	4450 3550 4450 3650
Wire Wire Line
	4450 4350 4450 4450
Text Label 3700 2250 2    60   ~ 0
gpio_rpi_active
Text Label 3700 5050 2    60   ~ 0
gpio_rpi_go_shutdown
Text Label 3700 5150 2    60   ~ 0
gpio_rpi_active
Wire Wire Line
	4250 5050 3700 5050
Wire Wire Line
	4250 5150 3700 5150
Text Label 3700 4000 2    60   ~ 0
gpio_rpi_go_shutdown
Connection ~ 4450 4000
Wire Wire Line
	3700 4000 4450 4000
$EndSCHEMATC
