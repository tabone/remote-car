#include <IRremote.h>

#include "IR.h"
#include "Motors.h"

/*
 * Function used to do initial setup.
 */
void setup() {
  Serial.begin(9600);

  // Start Receiver
  IR::receiver.enableIRIn();

  // Configure INPUT PINS.
  pinMode(IR::PIN, INPUT);

  // Configure OUTPUT PINS.
  pinMode(Motors::SPEED_LEFT_PIN, OUTPUT);
  pinMode(Motors::SPEED_RIGHT_PIN, OUTPUT);
  pinMode(Motors::REAR_LEFT_PIN, OUTPUT);
  pinMode(Motors::REAR_RIGHT_PIN, OUTPUT);
  pinMode(Motors::FRONT_LEFT_PIN, OUTPUT);
  pinMode(Motors::FRONT_RIGHT_PIN, OUTPUT);
}

void loop() {
  if (IR::receiver.decode(&IR::results)) {
    switch (IR::results.value) {
      case IR::REMOTE_LEFT: Motors::left(); break;
      case IR::REMOTE_UP: Motors::forward(); break;
      case IR::REMOTE_RIGHT: Motors::right(); break;
      case IR::REMOTE_DOWN: Motors::reverse(); break;
    }

    IR::receiver.resume();
  }
}
