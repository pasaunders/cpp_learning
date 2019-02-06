// Given two strings, check if one is a permutation of the other.
#include <iostream>
#include <string>
#include <bitset>
#include <stdexcept>
#include <cctype>

bool stringLengthCheck(std::string fisrtString, std::string secondString)
{
    return fisrtString.length() == secondString.length();
}

bool stringLetterCheck(std::string firstString, std::string secondString)
{
    std::bitset<26> firstLetterRecord;
    std::bitset<26> secondLetterRecord;
    for(int i = 0; i < firstString.length(); i++)
    {
        if (!std::isalpha(firstString[i]) || !std::isalpha(secondString[i])) {
            throw std::invalid_argument("non-alphabet characters included");
        }
        firstLetterRecord[std::tolower(firstString[i])-97] = true;
        secondLetterRecord[std::tolower(secondString[i])-97] = true;
    }
    return (firstLetterRecord ^ secondLetterRecord).none();
}

int main(int argc, char const *argv[])
{
    bool result = false;
    if (stringLengthCheck(argv[1], argv[2])) {
        bool result = stringLetterCheck(argv[1], argv[2]);
    }
    std::cout << result;
    return 0;
}
