#ifndef IR_H
#define IR_H

namespace IR {
  /*
   * IR value for up button.
   */
  const long REMOTE_UP = 16718055;
  
  /*
   * IR value for up down.
   */
  const long REMOTE_DOWN = 16730805;
  
  /*
   * IR value for left button.
   */
  const long REMOTE_LEFT = 16716015;
  
  /*
   * IR value for right button.
   */
  const long REMOTE_RIGHT = 16734885;
  
  /*
   * Digital PIN which the IR Receiver will be transmitting data to.
   */
  const int PIN = 3;

  /**
   * Create a new instance of IR Receiver.
   */
  IRrecv receiver(PIN);
  
  /**
   * Used to store the data the IR Receiver is receiving.
   */
  decode_results results;
}

#endif

