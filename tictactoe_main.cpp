#include "tictoctoe_main_functions.hpp"
#include <iostream>
#include <string>

int main() {
    std::string player1, player2;

    std::cout << "Enter first player name: ";
    std::getline(std::cin, player1);
    std::cout << "Enter second player name: ";
    std::getline(std::cin, player2);
    Gameboard   game1;
    game1.setGameSpace(0,0,'x');
    game1.setGameSpace(0,1,'y');
    game1.setGameSpace(0,2,'x');
    game1.setGameSpace(0,3,'y');
    game1.setGameSpace(1,0,'x');
    game1.setGameSpace(2,0,'y');
    game1.setGameSpace(3,0,'x');
    game1.setGameSpace(3,1,'y');
    game1.setGameSpace(3,2,'x');
    game1.setGameSpace(3,3,'y');
    
    return 0;
}
