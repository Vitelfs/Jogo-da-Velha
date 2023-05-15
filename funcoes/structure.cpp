#include <iostream>

void structure(char tictac[][3],int row,int collumns)
{
    std::cout << "0   1   2\n";
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < collumns;j++)
        {
           std::cout << tictac[i][j];
           if(j == 2)
           {
            std::cout << " " << i;
            break;
           }
           std::cout << " | ";
        }
        if(i == 2)
        {
            break;
        }
        std::cout << "\n---------\n";
    }
    
}