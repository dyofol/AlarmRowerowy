int pin = 2;
volatile int state = LOW;

void setup() {
    pinMode(pin, OUTPUT);
    attachInterrupt(digitalPinToInterrupt(pin), blink, CHANGE);
}

void loop() {
    digitalWrite(pin, state);
}

void blink() {
  tone(9, 100);
  delay(2000);
}

/*
 * 
tone(9, 1000);
delay(2000);
tone(9, 2000);
delay(2000);
tone(9, 3000);
delay(2000);
tone(9, 4000);
delay(2000);
tone(9, 5000);
delay(2000);
tone(9, 6000);
delay(2000);
tone(9, 7000);
delay(2000);
tone(9, 8000);
delay(2000);
tone(9, 9000);
*/
