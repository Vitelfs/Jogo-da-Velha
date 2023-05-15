#include <iostream>
#include "validate-moves.cpp"

void mechanic(char tictac[][3],int row,int collumns,int &player)
{
    int rows,coll;

        std::cout << "\nPlayer " << player << " enter a row: ";
        std::cin >> rows;
        validateMoveR(rows);
        std::cout << "Player " << player << " enter a collum: ";
        std::cin >> coll;
        validateMoveC(coll);
        validateMoveTaken(rows,coll,tictac);
        if(player == 1)
        {
            tictac[rows][coll] = 'X';
            player++; 
        }
        else
        {
            tictac[rows][coll] = 'O';
            player--;
        }     
}