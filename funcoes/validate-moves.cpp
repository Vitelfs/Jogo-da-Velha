#include <iostream>

void validateMoveR(int &rows)
{
    while(rows > 2 || rows < 0)
    {
        std::cout << "Invalid row,enter again: ";
        std::cin >> rows;
    }
}
void validateMoveC(int &coll)
{
    while(coll > 2 || coll < 0)
    {
        std::cout << "Invalid column,enter again: ";
        std::cin >> coll;
    }
}
void validateMoveTaken(int &rows,int &coll,char tictac[][3])
{
    while(tictac[rows][coll] != ' ')
    {
        std::cout << "Position taken,enter a new position.\n";
        std::cout << "Row: ";
        std::cin >> rows;
        while(rows < 0 or rows > 2){
            std::cout << "Invalid row, enter another: " << std::endl;
            std::cin >> rows;
        }
        std::cout << "Collumn: ";    
        std::cin >> coll;
        while(coll < 0 or coll > 2){
            std::cout << "Invalid collumn, enter another: " << std::endl;
            std::cin >> coll;
        }
    }
}