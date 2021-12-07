#include "pwm.h"

void controlSpeed(int lSpeed, int rSpeed)
{
    T0.ch1 = lSpeed;
    T0.ch2 = rSpeed;
}

void getVersion()
{
    return 1;
}