#include <iostream>

void biodata(std::string name, std::string varsity, int age);

int main() {
    std::string name = "Sharif";
    int age = 22;
    std::string varsity = "HSTU";
    
   biodata(name, varsity, age);
   biodata(name, varsity, age);
   biodata(name, varsity, age);
}

void biodata(std::string name, std::string varsity, int age) {
    std::cout << "Hello my name is " << name << '\n';
    std::cout << "Hello my age is " << age << '\n';
    std::cout << "Hello my varsity is " << varsity << '\n';
    std::cout << "Hello This is a function outside function\n\n";
}