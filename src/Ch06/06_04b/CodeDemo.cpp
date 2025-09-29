// Complete Guide to C++ Programming Foundations
// Exercise 06_04
// Writing Functions, by Eduardo Corpeño 

#include <iostream>
#include <string>

std::string getPlayerName();

int calculateScore(int baseScore, int multiplier);

void displayPlayerScore(const std::string& playerName, int score);

int main(){
    std::string playerName = getPlayerName();
    int score = calculateScore(75, 2);
    displayPlayerScore(playerName, score);
    
    std::cout << std::endl << std::endl;
    return 0;
}

std::string getPlayerName(){
    return "Alex";
}

int calculateScore(int baseScore, int multiplier){
    return baseScore * multiplier;
}

void displayPlayerScore(const std::string& playerName, int score){
    std::cout << playerName << " scored " << score << " points." << std::endl;
}