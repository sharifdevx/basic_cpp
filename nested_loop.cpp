#include <iostream>

int main() {
    for(int i =1; i <=5; i++) {
        for(int j =1; j <=10; j++) {
        std::cout << j << ' ';
    }
    std::cout << '\n';
    }

    int rows, columns;
    char symbol;
    
    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter symbol: ";
    std::cin >> symbol;
    
    for(int k = 1; k <= rows; k++) {
        for(int l = 1; l <= columns; l+= 1) {
            std::cout << symbol;
        }
        std::cout << '\n';
    }
    return 0;
}