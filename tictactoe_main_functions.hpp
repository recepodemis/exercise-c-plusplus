#include "tictactoe_main_classes.hpp"

int checkDiagonal(Gameboard board[4][4]);

int checkDiagonal(Gameboard board[4][4])
{
    int flag_x = 0, flag_y = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (board[i][j] == 'x')
            {
                flag_x++;
            }
            else if (board[i][j] == 'y')
            {
                flag_y++;
            } 
        }
        if (flag_x == 4)
        {
            return 1;
        }
        else if (flag_y == 4)
        {
           return 0;
        }
        else
        flag_x = 0, flag_y = 0;
    }
    return -1;
}