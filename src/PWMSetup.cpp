#include <Arduino.h>
#include <esp32-hal-ledc.h>
#include "PWMSetup.h"

// PWM properties
const int freq = 30000;
const int pwmChannel = 0;
const int resolution = 8;

void configurePWM(int pin)
{
    ledcAttachChannel(pin, freq, resolution, pwmChannel);
}

void setPWMDutyCycle(int pin, int dutyCycle)
{
    ledcWrite(pwmChannel, dutyCycle);
}
