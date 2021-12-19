#include <iostream>
#include "gun.h"

int main()
{
    Gun beretta("Beretta", 10);

    std::cout << beretta << std::endl;

    // beretta.reload();
    beretta.prepare();

    try
    {
        beretta.shoot();
    }
    catch(...)
    {
        std::cout << "Cannot shoot... trying reload" << std::endl;
        beretta.reload();
        beretta.shoot();
    }

    std::cout << beretta << std::endl;

    return 0;
}

// Пистолет может стрелять. 

// Пистолет можно зарядить. 
// Без патронов пистолет не стреляет.