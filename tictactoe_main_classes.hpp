/*header file for main.cpp*/
#include <iostream>
#include <iomanip> 
using namespace std;

class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row,int column);
    void printInfo(); //print the game board in a 4x4 matrix
};

Gameboard:: Gameboard()
{
    for(int i = 0; i <4; i++)
    {
        for(int j = 0; j<4; j++)
        {
            gameSpace[i][j] = '-';
        }
    }
}


void    Gameboard::setGameSpace(int row,int column, char value)
{
    gameSpace[row][column] = value;
}

char    Gameboard::getGameSpace(int row,int column)
{
    return gameSpace[row][column];
}

void Gameboard::printInfo()
{
    cout<<std::setw(5);
    cout<<"\n";
    for(int i=0;i<4; i++)
    {
        for(int j=0;j<4; j++)
        {
            cout<<gameSpace[i][j];
        }
        cout<<"\n";
    }
}