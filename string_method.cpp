#include <iostream>
int main() {
    std::string name;
    std::cout << "Enter your full name: " << '\n';
    std::getline(std::cin, name);
    std::cout << "Your name is: " << name << '\n';

    if (name.empty()) {
        std::cout << "Your didn't enter your name." << '\n';
    }

    // if (name.clear()) 
    // to clear string and make it empty

    else if (name.length() > 15) {
        std::cout << "Your name is too long." << '\n';
    }

    name.append("@gmail.com");
    std::cout << "Your email is: " << name << '\n';
    return 0;
}