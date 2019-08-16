/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

int relay1 = 9;
int relay2 = 8;
int relay3 = 7;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on
  
  digitalWrite(relay1, HIGH);         // relay 1
  delay(650);
  digitalWrite(relay1, LOW);

  digitalWrite(relay2, HIGH);         // relay 2
  delay(60);
  digitalWrite(relay2, LOW);
  delay(60);
  digitalWrite(relay2, HIGH);         // relay 2
  delay(60);
  digitalWrite(relay2, LOW);
  delay(60);
  digitalWrite(relay2, HIGH);         // relay 2
  delay(60);
  digitalWrite(relay2, LOW);
  delay(60);
  digitalWrite(relay2, HIGH);         // relay 2
  delay(60);
  digitalWrite(relay2, LOW);
  delay(60);
  digitalWrite(relay2, HIGH);         // relay 2
  delay(60);
  digitalWrite(relay2, LOW);
  delay(60);
  digitalWrite(relay2, HIGH);         // relay 2
  delay(60);
  digitalWrite(relay2, LOW);
  delay(60);
  digitalWrite(relay2, HIGH);         // relay 2
  delay(60);
  digitalWrite(relay2, LOW);
  delay(60);
  digitalWrite(relay2, HIGH);         // relay 2
  delay(60);
  digitalWrite(relay2, LOW);
  delay(60);
  digitalWrite(relay2, HIGH);         // relay 2
  delay(60);
  digitalWrite(relay2, LOW);
  
  

  digitalWrite(relay3, HIGH);         // relay 3
  delay(650);
  digitalWrite(relay3, LOW);

  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off
  //delay(650);                       // wait for a bit
}
