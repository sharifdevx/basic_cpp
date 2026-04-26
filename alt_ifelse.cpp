#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: " << '\n';
    std::cin >> num;
    num % 2 ? std::cout << "ODD" : std::cout << "EVEN";
    return 0;
}