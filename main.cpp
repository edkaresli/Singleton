
#include "singleton.h"

#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    cout << "Hello Singleton!" << endl;
    cout << "Boss is: " << Singleton::getInstance()->getBoss() << endl;
    
    Singleton::getInstance()->setBoss("Bill Gates");
    cout << "Boss is: " << Singleton::getInstance()->getBoss() << endl;

    return 0;
}