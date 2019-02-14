//basic string compresssion aabcccccaaa -> a2b1c5a3. Return original string if it would be shorter
#include <iostream>
#include <string>
#include <sstream>
#include <map>

int main(int argc, char const *argv[])
{
    std::string toCompress = argv[1];
    std::ostringstream outputStream;
    for(size_t i = 0; i < toCompress.length(); i++)
    {
        int letterCount = 1;
        char currentChar = toCompress[i];
        while(toCompress[i + 1] == currentChar){
            i++;
            letterCount++;
        }
        outputStream << currentChar << std::to_string(letterCount);        
    }
    std::string result = outputStream.str();
    if (result.length() < toCompress.length()) {
        std::cout << result;
    } else
    {
        std::cout << toCompress;
    } 
    return 0;
}
