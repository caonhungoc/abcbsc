#include "humid/humid.h"

int main()
{
    // add to test git
    print(getVersion());
    while(1) 
    {
        print(getHumidValue());
        delay(1000);
    }
    return 0;
}