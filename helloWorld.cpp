#include <iostream>
#include "practiceHeader.h"

int main(int argc, char const *argv[])
{
    std::string toPrint;
    std::cout << "Main Function!" << std::endl;
    std::cout << "Type something:";
    std::cin >> toPrint;
    doPrint(toPrint);

    //test that I'm using references right.
    std::cout << "refTest value: " << toPrint << std::endl;
    
    //clear input and wait for keystroke to close the window.
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    std::cin.get();
    return 0;
}