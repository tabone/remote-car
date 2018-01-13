#ifndef MOTORS_H
#define MOTORS_H

namespace Motors {
  /*
   * Analog PIN used to control the speed of the right motors.
   */
  const int SPEED_LEFT_PIN = 6;
  
  /*
   * Analog PIN used to control the speed of the left motors.
   */
  const int SPEED_RIGHT_PIN = 5;
  
  /*
   * Digital PIN used to control the rear left motor.
   */
  const int REAR_LEFT_PIN = 8;
  
  /*
   * Digital PIN used to control the rear right motor.
   */
  const int REAR_RIGHT_PIN = 4;
  
  /*
   * Digital PIN used to control the front left motor.
   */
  const int FRONT_LEFT_PIN = 7;
  
  /*
   * Digital PIN used to control the front right motor.
   */
  const int FRONT_RIGHT_PIN = 2;
  
  /*
   * Default motors speed.
   */
  const int SPEED = 255;
  
  /*
   * Default movement duration.
   */
  const int MOVEMENT_DURATION = 500;
  
  /*
   * Function used to speed up the motors.
   */
  void engineOn () {
    digitalWrite(SPEED_LEFT_PIN, SPEED);
    digitalWrite(SPEED_RIGHT_PIN, SPEED);
  }
  
  /*
   * Function used to slow down the motors.
   */
  void engineOff () {
    digitalWrite(SPEED_LEFT_PIN, 0);
    digitalWrite(SPEED_RIGHT_PIN, 0);
  }

  /*
   * Fuction used to go forward.
   */
  void forward () {
    engineOn();
    digitalWrite(FRONT_RIGHT_PIN, HIGH);
    digitalWrite(REAR_RIGHT_PIN, LOW);
    digitalWrite(FRONT_LEFT_PIN, HIGH);
    digitalWrite(REAR_LEFT_PIN, LOW);
    delay(MOVEMENT_DURATION);
    engineOff();
  }
  
  /**
   * Function used to go in reverse.
   */
  void reverse () {
    engineOn();
    digitalWrite(FRONT_RIGHT_PIN, LOW);
    digitalWrite(REAR_RIGHT_PIN, HIGH);
    digitalWrite(FRONT_LEFT_PIN, LOW);
    digitalWrite(REAR_LEFT_PIN, HIGH);
    delay(MOVEMENT_DURATION);
    engineOff();
  }
  
  /**
   * Function used to turn left.
   */
  void left () {
    engineOn();
    digitalWrite(FRONT_RIGHT_PIN, HIGH);
    digitalWrite(REAR_RIGHT_PIN, LOW);
    digitalWrite(FRONT_LEFT_PIN, LOW);
    digitalWrite(REAR_LEFT_PIN, HIGH);
    delay(MOVEMENT_DURATION);
    engineOff();
  }
  
  /**
   * Function used to turn right.
   */
  void right () {
    engineOn();
    digitalWrite(FRONT_RIGHT_PIN, LOW);
    digitalWrite(REAR_RIGHT_PIN, HIGH);
    digitalWrite(FRONT_LEFT_PIN, HIGH);
    digitalWrite(REAR_LEFT_PIN, LOW);
    delay(MOVEMENT_DURATION);
    engineOff();
  }
}

#endif

