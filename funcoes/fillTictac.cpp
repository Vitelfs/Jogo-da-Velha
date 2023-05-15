#include <iostream>

void fillTicTac(char tictac[][3],int row,int collumns)
{
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < collumns;j++)
        {
            tictac[i][j] = ' ';
        }
    }
}