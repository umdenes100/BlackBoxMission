

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 3 as an output.
  pinMode(3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(3, HIGH);   // turn the IR LED on (HIGH is the voltage level)
  delay(50);                       // wait for 50 ms
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for 200 ms
}
