
#include "Keyboard.h"
#include "Mouse.h"

// Digital pins
// If rotation is 180 degrees out of sync, then swap the two pins.
// Need to provide pulldown resistors
const int input1 = 4;
const int input2 = 5;

// This allows the end user to specify what OS their computer is running. Needed
// due to unique keyboard shortcuts between each OS.

// 0 = windows, 1 = mac, 2 = linux

// Only windows is implemented at present. macOS will need some additional
// effort, as there is no built in keyboard shortcut to do this. Linux will vary
// based on desktop environment.
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

int position = 0;
// setting differently, so the code will run the first time.
int lastPosition = 1;

void loop() {

  // 0 + (2*0) = 0
  // 1 + (2*0) = 1
  // 0 + (2*1) = 2
  // 1 + (2*1) = 3

  position = digitalRead(input1) + (2 * digitalRead(input2));

  if (position != lastPosition){ // position has changed.

  // you may have to change which case does what based on the direction the sensor
  // is facing.
    switch(position){
      case 0:
        rotateUp();
        break;
      case 1:
        rotateLeft();
        break;
      case 2:
        rotateDown();
        break;
      case 3:
        rotateRight();
        break;
    }

  }

  lastPosition = position;
}

// key codes are at https://www.arduino.cc/en/Reference/KeyboardModifiers
void rotateUp(){
  switch(OS){
    case 0:
        Keyboard.press(KEY_LEFT_CTRL);
        Keyboard.press(KEY_LEFT_ALT);
        Keyboard.press(Key_UP_ARROW);
        delay(100);
        Keyboard.releaseAll();
        break;
      break;
    case 1:
      break;
    case 2:
      break;
  }
}

void rotateLeft(){
  switch(OS){
    case 0:
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press(Key_LEFT_ARROW);
      delay(100);
      Keyboard.releaseAll();
      break;
    case 1:
      break;
    case 2:
      break;
  }

}

void rotateDown(){
  switch(OS){
    case 0:
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press(Key_DOWN_ARROW);
      delay(100);
      Keyboard.releaseAll();
      break;
    case 1:
      break;
    case 2:
      break;
  }

}

void rotateRight(){

  switch(OS){
    case 0:
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press(Key_RIGHT_ARROW);
      delay(100);
      Keyboard.releaseAll();
      break;
    case 1:
      break;
    case 2:
      break;
  }

}
