#include <iostream>
int main() {
    double temp;
    char unit;
    std::cout << "***********Temperature Converter**************" << '\n';
    std::cout << "Enter temperature: " << '\n';
    std::cin >> temp;
    std::cout << "Enter unit (C or F): " << '\n';
    std::cin >> unit;
    if (unit == 'C' || unit == 'c') {
        temp = (temp * 9/5) + 32;
        std::cout << "Temperature in Fahrenheit: " << temp << " F" << '\n';
    }
    else if (unit == 'F' || unit == 'f') {
        temp = (temp -32) *5/9;
        std::cout << "Temperature in Celsius: " << temp << " C" << '\n';
    }
    else {
        std::cout << "Just enter C or F for the unit." << '\n';
    }

    std::cout << "***********************************************" << '\n';
    return 0;
}