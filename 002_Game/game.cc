#include <iostream>
#include <cctype>
#include <limits>

char getMove()
{
    char left = 'a';
    char right = 'd';

    char move;
    std::cin >> move;
    move = std::tolower(move);
    return move;
}


char leftOrRight(char move)
{

if (move == left)
{
    std::cout << "Your character moved left!";
}
else if (move == right)
{
    std::cout << "Your character moved right!";
}
else
{
    std::cerr << "[ERROR]: Use a valid action!";
}
}


int main()
{
    std::cout << "Welcome to the Game!" << std::endl;
    std::cout << "Start to move your chracter with a for left or d for right." << std::endl;

    leftOrRight(getMove()); //Version1 use directly the method call
    //char mainMove{getMove()}; //Version2 use new main variable to pass values to the next method?
    //char mainLeftRight{leftOrRight()}; //Version2

}
