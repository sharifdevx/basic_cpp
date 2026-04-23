#include <iostream>
int main() {
    //  implicit and explicit
    //  implicit type conversion (automatic)
    //  explicit type conversion (manual) - type casting
    //  we can convert one data type to another data type using type casting: (type)variable
    int right = 8;
    int total = 10;
    int score = right /(double)total * 100;
    std::cout << score << "%" << std::endl;



//  user inputs


    std::string name;
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0;
}