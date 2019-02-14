#include <iostream>

void doPrint(std::string &toPrint)
{
    std::cout << "printing now" << std::endl;
    std::cout << "Printing: " << toPrint << std::endl;

    //changes the reference value, which has impact back in main.
    toPrint = "new value";
}
