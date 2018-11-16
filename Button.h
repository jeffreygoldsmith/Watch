#ifndef BUTTON_H
#define BUTTON_H

#include "Arduino.h"

#define HOLD_TIME 1000

class Button
{
  public:
    Button();
    void Init(int, void (*)(), void (*)());
    void Poll();

  protected:
    void (*press)();
    void (*hold)();
    int pin;
    int value;
    int previousValue;
    bool isButtonBeingPressed;
    unsigned long pressStartTime;
};

#endif // BUTTON_H