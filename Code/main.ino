
// Digital pins
// If rotation is 180 degrees out of sync, then swap the two pins.
// Need to provide pulldown resistors
const int input1 = 4;
const int input2 = 5;

//logical 1 is VDD, usually 5V.

void setup() {
  // Configure pins as inputs
  pinMode(input1, INPUT);
  pinMode(input2, INPUT);
  //disable internal pullup resistors
  digitalWrite(input1, LOW);
  digitalWrite(input2, LOW);

}

void loop() {
  if (digitalRead(input1) && digitalRead(input2)){

  }

}
