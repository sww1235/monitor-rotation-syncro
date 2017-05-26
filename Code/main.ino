
#include "Keyboard.h"
#include "Mouse.h"

// Digital pins
// If rotation is 180 degrees out of sync, then swap the two pins.
// Need to provide pulldown resistors
const int input1 = 4;
const int input2 = 5;

// This allows the end user to specify what OS their computer is running.
// Needed due to unique keyboard shortcuts between each OS
// 0 = windows, 1 = mac, 2 = linux
const int OS = 0;

//logical 1 is VDD, usually 5V.

void setup() {
  // Configure pins as inputs
  pinMode(input1, INPUT);
  pinMode(input2, INPUT);
  //disable internal pullup resistors
  digitalWrite(input1, LOW);
  digitalWrite(input2, LOW);
  //Start arduino keboard emulation
  Keyboard.begin();
}

void loop() {
  position = digitalRead(input1) + (2 * digitalRead(input2));

  // 0 + (2*0) = 0
  // 1 + (2*0) = 1
  // 0 + (2*1) = 2
  // 1 + (2*1) = 3


// you may have to change which case does what based on the direction the sensor
// is facing.
  switch(position){
    case 0:

      break;
    case 1:

      break;
    case 2:

      break;
    case 3:

      break;
  }

}

void rotateLeft(){

}
