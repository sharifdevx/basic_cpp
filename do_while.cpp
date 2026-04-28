#include <iostream>
int main() {
    double number;


    do {
        std::cout << "Enter a positive number: \n";
        std::cin >> number;
    } while(number <= 0);
    std::cout << "The positive value is: " << number;
    return 0;
}