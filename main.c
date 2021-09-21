#include "pwm.h"

int main()
{
    print(getVersion());
    while(1) 
    {
        controlSpeed(50, 50);
    }
    return 0;
}