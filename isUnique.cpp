//Implement an algorithim to determine if a string has all unique characters
#include <iostream>
#include <string>
#include <unordered_set>
#include <bitset>
#include <stdexcept>
#include <cctype>

bool naiveUnique(std::string word)
{
    std::unordered_set<char> uniqueCharacters;
    for(auto&& character : word)
    {
        if(uniqueCharacters.find(character) == uniqueCharacters.end())
        {
            uniqueCharacters.insert(character);
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool inPlaceUnique(std::string word)
{
    std::bitset<26> charFoundChecker;
    for(int i = 0; i < word.length(); i++)
    {
        int alphabetPosition = tolower(word[i]) - 97;
        if(alphabetPosition < 0 || alphabetPosition > 25) 
            throw std::invalid_argument("recieved non-alphabet character");

        if (charFoundChecker[alphabetPosition] == true ) {
            return false;
        }
        else
        {
            charFoundChecker[alphabetPosition] = true;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    bool uniqueness = inPlaceUnique(argv[1]);
    std::cout << uniqueness;
    return uniqueness;
}
