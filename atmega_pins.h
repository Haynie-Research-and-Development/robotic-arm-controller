/*
**********************************************************
* CATEGORY	hardware
* GROUP		microcontroller
* AUTHOR	Lance Haynie <lance@hayniemail.com>
* DATE		2015-12-05
* FILE		atmega_pins.h
* PURPOSE	atmega pin assignments
**********************************************************
* MODIFICATIONS
* 2015-12-05 - LHAYNIE - Initial Version
**********************************************************
ATMEGA Non I/O pin definitions
ATM01 = reset
ATM07 = VCC
ATM08 = GND
ATM09 = crystal
ATM10 = crystal
ATM20 = VCC
ATM21 = analog reference
ATM22 = GND
*/
#define ATMEGA_PIN_VERSION "0.0.1"

//**********************************************************
// ARDUINO -> ATMEGA8/168/328 PIN MAPPING
//**********************************************************

//Digital pins
#define ATM02 0 //RX
#define ATM03 1 //TX
#define ATM04 2
#define ATM05 3
#define ATM06 4
#define ATM11 5 //PWM
#define ATM12 6 //PWM
#define ATM13 7
#define ATM14 8
#define ATM15 9 //PWM
#define ATM16 10 //PWM
#define ATM17 11 //PWM
#define ATM18 12
#define ATM19 13

//Analog pins
#define ATM23 A0
#define ATM24 A1
#define ATM25 A2
#define ATM26 A3
#define ATM27 A4
#define ATM28 A5
