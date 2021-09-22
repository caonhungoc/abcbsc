#include "humid/humid.h"

int main()
{
    print(getVersion());
    while(1) 
    {
        print(getHumidValue());
        delay(1000);
    }
    return 0;
}