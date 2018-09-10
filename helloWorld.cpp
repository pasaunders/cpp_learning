#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::cout << "Hello world!" << std::endl;
    int x = 5;
    std::cout << "x is equal to: " << x;
    
    //clear input and wait for keystroke to close the window.
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    std::cin.get();
    return 0;
}


