#include <iostream>

int checkWinner(char tictac[][3],int row,int collumns,int &winner)
{
    for(int i = 0; i < row;i++)
    {
        if(tictac[i][0] == 'X' && tictac[i][1] == 'X' && tictac[i][2] == 'X')
        {
            winner = 1;
            return winner;
        }
        else if(tictac[i][0] == 'O' && tictac[i][1] == 'O' && tictac[i][2] == 'O')
        {
            winner = 2;
            return winner;
        }
    }
    for(int j = 0; j < collumns;j++)
    {
        if(tictac[0][j] == 'X' && tictac[1][j] == 'X' && tictac[2][j] == 'X')
        {
            winner = 1;
            return winner;
        }
        else if(tictac[0][j] == 'O' && tictac[1][j] == 'O' && tictac[2][j] == 'O')
        {
            winner = 2;
            return winner;
        }
    }
    if(tictac[0][0] == 'X' && tictac[1][1] == 'X' && tictac[2][2] == 'X')
    {
        winner = 1;
        return winner;
    }
    else if(tictac[0][0] == 'O' && tictac[1][1] == 'O' && tictac[2][2] == 'O')
    {
        winner = 2;
        return winner;
    }
    if(tictac[0][2] == 'X' && tictac[1][1] == 'X' && tictac[2][0] == 'X')
    {
        winner = 1;
        return winner;
    }
    else if(tictac[0][2] == 'O' && tictac[1][1] == 'O' && tictac[2][0] == 'O')
    {
        winner = 2;
        return winner;
    }
    else
    {
        return 0;
    }
}