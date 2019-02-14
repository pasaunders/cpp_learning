//Check whether the input string could be arranged as a palindrome.
#include <string>
#include <iostream>
#include <unordered_map>

std::unordered_map<char, int> letterSorting(std::string toSort)
{
    std::unordered_map<char, int> sortedLetters;
    for(auto&& letter : toSort)
    {
        if (letter == ' ') {
            continue;
        }
        if (sortedLetters[letter] != 0) {
            sortedLetters[letter] += 1;
        } else
        {
            sortedLetters[letter] = 1;
        }        
    }
    return sortedLetters;
}

int main(int argc, char const *argv[])
{
    std::string inputString = argv[1];
    std::unordered_map<char, int> sortedLetters = letterSorting(inputString);
    bool singleAllowed = false;
    inputString.length() % 2 == 0 ? singleAllowed = true : singleAllowed = false;
    for(auto&& node : sortedLetters)
    {
        if(node.second % 2 != 0 && singleAllowed == true)
        {
            singleAllowed = false;
        } else if (node.second %2 != 0) {
            std::cout << "not a palindrome permuatation";
            return false;
        }
    }
    std::cout << "a plaindrome permutation";
    return true;
}
