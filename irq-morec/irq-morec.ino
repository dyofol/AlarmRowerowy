/* 
Simple Interrupt example
by: Jordan McConnell
SparkFun Electronics
created on 10/29/11
license: Beerware- feel free to use this code and maintain
attribution. If we ever meet and you are overcome with gratitude,
feel free to express your feelings via beverage.
*/

int ledPin = 9;  // LED is attached to digital pin 13
int x = 0;  // variable to be updated by the interrupt

void setup() {                
  //enable interrupt 0 (pin 2) which is connected to a button
  //jump to the increment function on falling edge
  attachInterrupt(0, increment, LOW);
  Serial.begin(9600);  //turn on serial communication
}

void loop() {
  //digitalWrite(ledPin, LOW);
  tone(ledPin, 1000);
  delay(300); //pretend to be doing something useful
  Serial.println(x, DEC); //print x to serial monitor
}

// Interrupt service routine for interrupt 0
void increment() {
    x++;
    //digitalWrite(ledPin, HIGH);
    ///tone(ledPin, 1000);
}
