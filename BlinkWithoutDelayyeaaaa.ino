/*
  Blink without Delay

  Turns on and off a light emitting diode (LED) connected to a digital pin,
  without using the delay() function. This means that other code can run at the
  same time without being interrupted by the LED code.

  The circuit:
  - Use the onboard LED.
  - Note: Most Arduinos have an on-board LED you can control. On the UNO, MEGA
    and ZERO it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN
    is set to the correct LED pin independent of which board is used.
    If you want to know what pin the on-board LED is connected to on your
    Arduino model, check the Technical Specs of your board at:
    https://www.arduino.cc/en/Main/Products

  created 2005
  by David A. Mellis
  modified 8 Feb 2010
  by Paul Stoffregen
  modified 11 Nov 2013
  by Scott Fitzgerald
  modified 9 Jan 2017
  by Arturo Guadalupi

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
*/

// constants won't change. Used here to set a pin number:
const int lamp =  8;// the number of the LAMP
const int pump1 =  7;
const int pump2 =  9;

// Variables will change:
int ledState = LOW;             // ledState used to set the LED
int pump1State = LOW;
int pump2State = HIGH;

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long lampMillis = 0;        // will store last time LED was updated
unsigned long pump1Millis = 0;
unsigned long pump2Millis = 0;

// constants won't change:
const long lampinterval = 55;           // interval at which to blink (milliseconds)
const long pump1interval = 700;           // interval at which to blink (milliseconds)
const long pump2interval = 700;           // interval at which to blink (milliseconds)


void setup() {
  // set the digital pin as output:
  pinMode(lamp, OUTPUT);
}

void loop() {
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
  unsigned long currentMillis = millis();

  // LAMP
  if (currentMillis - lampMillis >= lampinterval) {
    // save the last time you blinked the LED
    lampMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(lamp, ledState);
  }
  
  // PUMP1
  if (currentMillis - pump1Millis >= pump1interval) {
    // save the last time you blinked the pump1
    pump1Millis = currentMillis;

    // if the pump1 is off turn it on and vice-versa:
    if (pump1State == LOW) {
      pump1State = HIGH;
    } else {
      pump1State = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(pump1, pump1State);
  }

  // PUMP2
  if (currentMillis - pump2Millis >= pump2interval) {
    // save the last time you blinked the pump1
    pump2Millis = currentMillis;

    // if the pump1 is off turn it on and vice-versa:
    if (pump2State == LOW) {
      pump2State = HIGH;
    } else {
      pump2State = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(pump2, pump2State);
  }
  
}
