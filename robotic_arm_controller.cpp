/*
**********************************************************
* CATEGORY	HARDWARE
* GROUP		MICROCONTROLLER
* AUTHOR	LANCE HAYNIE <LHAYNIE@HAYNIEMAIL.COM>
* DATE		YYYY-MM-DD
* PURPOSE
* FILE
**********************************************************
* MODIFICATIONS
* YYYY-MM-DD - LHAYNIE - INITIAL VERSION
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

//Digital pins
ATM02 = 0 //RX
ATM03 = 1 //TX
ATM04 = 2
ATM05 = 3
ATM06 = 4
ATM11 = 5 //PWM
ATM12 = 6 //PWM
ATM13 = 7
ATM14 = 8
ATM15 = 9 //PWM
ATM16 = 10 //PWM
ATM17 = 11 //PWM
ATM18 = 12
ATM19 = 13

//Analog pins
ATM23 = A0
ATM24 = A1
ATM25 = A2
ATM26 = A3
ATM27 = A4
ATM28 = A5
*/


//**********************************************************
// GLOBAL VARIABLES/INCLUDES/MISC
//**********************************************************
#include "config.h"
#include "functions.h"

//**********************************************************
// MAIN PROGRAM
//**********************************************************

//program setup
void setup() {
  //let the system boot real quick
  delay(500);

  //initialize serial
  initSerial();

  //initialize pin 19 (Arduino 13) as output
  pinMode(ATM19, OUTPUT);

}

//program loop
void loop() {
  //turn an LED on
  digitalWrite(ATM19, HIGH);
  Serial.print("On\n");
  delay(1000);

  //then turn it back off
  digitalWrite(ATM19, LOW);
  Serial.print("Off\n");
  delay(1000);
}
