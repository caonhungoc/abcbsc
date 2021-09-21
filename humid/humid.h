#include "humid.h"

float getHumidValue() 
{
    float humid = 0;
    humid = i2c.read(0xaa);
    return humid;
}