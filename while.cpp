#include <iostream>
int main() {
    std::string name;

    /*while (name.empty()) {
        std::cout << "Enter Your name: " << '\n';
        std::getline(std::cin, name);
    }
    std::cout << "Hello " << name << '\n';*/
    std::getline(std::cin, name);
    /*while (condition) { code block to be executed }*/
    int i = 0;
    while (i < 5) {
        std::cout << "Hello Bangladesh and Hello Mr. " << name << '\n';
        i+=1;
    }
    return 0;
}