#include <iostream>
int main() {
    int age = 45;
    std::cout << age << '\n';
    std::cout << "Your age is: " << age << std::endl;


    float temperature = 35.34525155;
    std::cout << "Todays temperature is: " << temperature << std::endl;

    double pi = 3.14159265;
    std::cout << "The value of pi is: " << pi << std::endl;


    char cgpa = 'A';
    std::cout << "Your grade is: " << cgpa << std::endl;


    bool summer = true;
    bool light = false;
    bool current = false;
    std::cout << summer << std::endl;


    std::string name = "Sharif Ahmed";
    std::string address = "123 st. Jamalpur";
    std::string varsity;
    varsity = "hstu";
    std::cout << "Hello! \nI'm "<< name << "\nI live in " << address << '\n' << "Studying in " << varsity << std::endl;
    std::cout << "Welcome to our varsity";
    return 0;
}