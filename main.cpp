#include <iostream>
#include <string>
#include "c-echo.h"
#include "c-count.h"

int main(int argv, char** argc) 
{
    std::cout << "Count of output: " << count(echo(argv,argc)) << std::endl;
 //   std::cout << "What is your name?" << std::endl;
 //   std::cin >> name;
 //    std::cout << "Hello " << name << "!" << std::endl;

    return 0;
}
