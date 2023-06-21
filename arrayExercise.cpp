#include <iostream>
#include <stdio.h>

int main()
{
    int userInput[5];
    int number;
    for(int i = 0; i <40; i++)
    {
        std::cin >> number;
        userInput[i] = number;
        std::cout<<userInput[i]<<" ";
        if(i == 39)
        {
            while(i>= 0)
            {
                std::cout<<userInput[i]<<" ";
                i--;
            }
        }
    }
    return 0;
}