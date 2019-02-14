//Replace all ' ' with %20 in a string. Input is a string/char array with enough extra space for the change
// plus the number of characters pre-change.
#include <string>
#include <iostream>


int main(int argc, char const *argv[])
{
    std::string words = argv[1];
    int startLength = atoi(argv[2]);
    int numberOfEndSpaces = words.length() - startLength;
    for(int i = startLength - 1; i >= 0; i--)
    {
        if (words[i] != ' ')
        {
            words[i + numberOfEndSpaces] = words[i];
        }
        else
        {
            words[i + numberOfEndSpaces] = '0';
            words[i - 1 + numberOfEndSpaces] = '2';
            words[i - 2 + numberOfEndSpaces] = '%';
            numberOfEndSpaces -= 2;
        }
    }
    std::cout << words;
    return 0;
}
