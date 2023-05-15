#include <iostream>
#include "funcoes/fillTictac.cpp"
#include "funcoes/structure.cpp"
#include "funcoes/mechanic.cpp"
#include "funcoes/check_winner.cpp"

int main()
{
    char tictac[3][3];
    int player = 1,moves = 9, winner = 0;
    int row = sizeof(tictac)/sizeof(tictac[0]);
    int collumns = sizeof(tictac[0])/sizeof(tictac[0][0]);

    fillTicTac(tictac,row,collumns);
    while(moves > 0){ 
        system("cls");
        checkWinner(tictac,row,collumns,winner);
        if(winner == 1)
        {
            structure(tictac,row,collumns);
            std::cout << "\nPlayer 1 win!!";
            break;
        }
        else if(winner == 2)
        {
            structure(tictac,row,collumns);
            std::cout << "\nPlayer 2 win!!";
            break;
        }
        structure(tictac,row,collumns);
        mechanic(tictac,row,collumns,player);
        moves--;
        if(moves == 0){
            system("cls");
            structure(tictac,row,collumns);
            std::cout << "\nIt's a draw!!";
        break;
        }
    };
    system("pause");
}
