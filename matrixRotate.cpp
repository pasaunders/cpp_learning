//rotate a 2d array 90 degrees clockwise.
// note to self: revisit with templates for general case applicaiton.
#include <array>
#include <iostream>
#include <string>
#include <algorithm>

std::array<std::array<int, 3>, 3> transpose(std::array<std::array<int, 3>, 3> unprocessedArray)
{
    std::array<std::array<int,3>,3> transposedArray;
    for(size_t i = 0; i < unprocessedArray.size(); i++)
    {
        for(size_t j = 0; j < unprocessedArray.size(); j++)
        {
            transposedArray[i,j] = unprocessedArray[j,i];
        }
    }
    return transposedArray;
}

int main(int argc, char const *argv[])
{
    std::array<std::array<int,3>, 3> startingArray = {{{0,1,2},{3,4,5},{6,7,8}}};
    std::array<std::array<int,3>,3> transposedArray = transpose(startingArray);
    for(auto&& i : transposedArray)
    {
        std::reverse(std::begin(i), std::end(i));
    }
    for(auto&& i : transposedArray)
    {
        for(auto&& j : i)
        {
            std::cout << j;
        }
    }
    system("pause");
    return 0;
}

