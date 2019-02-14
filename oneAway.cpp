//compare two strings. Return or output true if there has been no more than one 
//character insertion, removal or replacement
#include <iostream>
#include <string>
#include <iterator>

bool insertRemoveCheck(std::string shortWord, std::string longWord)
{
    bool oneDifference = false;
    std::string::iterator iterShort;
    std::string::iterator iterLong;
    iterShort = shortWord.begin();
    iterLong = longWord.begin();

    for(auto i = 0; i < shortWord.length(); i++)
    {
        iterShort++;
        iterLong++;
        if(*iterShort != *iterLong && oneDifference == true)
        {
            return false;
        } else if(*iterShort != *iterLong)
        {
            oneDifference = true;
            iterLong++;
        }
    }
    return true;
}


bool replaceCheck(std::string wordOne, std::string wordTwo)
{
    bool oneDifference = false;
    for(size_t i = 0; i < wordOne.length(); i++)    
    {
        if (wordOne[i] != wordTwo[i] && oneDifference == true) {
            return false;
        } else if (wordOne[i] != wordTwo[i]) {
            oneDifference = true;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    std::string firstWord = argv[1];
    std::string secondWord = argv[2];
    if (firstWord.length() == secondWord.length()) {
        std::cout << replaceCheck(firstWord, secondWord);
    } else if (firstWord.length()+1 == secondWord.length()) {
        std::cout << insertRemoveCheck(firstWord, secondWord);
    } else if (firstWord.length() == secondWord.length()+1)
    {
        std::cout << insertRemoveCheck(secondWord, firstWord);
    } else
    {
        std::cout << "invalid input - lengths are bad";
    }
    return 0;
}
