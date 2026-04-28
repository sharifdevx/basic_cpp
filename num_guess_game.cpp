#include <iostream>
#include <ctime>

int main() {
    int num, guess, tries = 0;
    
    srand(time(0));
    num = (rand() % 100) + 1;

    std::cout << "***********NUMBER GUESSING GAME************\n";

    do{
    std::cout << "Enter a guess between (1-100)\n";
    std::cin >> guess;
    tries++;
    if(guess > num) {
        std::cout << "Too High\n";
    }
    else if(guess < num) {
        std::cout << "Too Low\n";
    }
    else {
        std::cout << "Correct! You have tried: " << tries << " times\n";
    }
    }while(guess != num);

    std::cout << "*******************************************\n";
    return 0;
}