#include "i2c.h"

float getHumidValue() 
{
    float humid = 0;
    humid = i2c.read(0xaa);
    return humid;
}

void resetSensor()
{
    i2c.write(0x00);
}

void disconnectSensor() 
{
    i2c.write(0x11);
}