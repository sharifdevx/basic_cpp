#include <iostream>
#include <ctime>

int main() {
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum) {
        case 1: std::cout << "You won a sticker!\n";
                break;
        case 2: std::cout << "You won a Phone!\n";
                break;
        case 3: std::cout << "You won a TV!\n";
                break;
        case 4: std::cout << "You won nothing! Try again.\n";
                break;
        case 5: std::cout << "You won a Concert Ticket!\n";
                break;
    }
}