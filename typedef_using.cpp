#include <iostream>
/*typedef std::string name_t;
typedef int age_t;*/

using name_t = std::string;
using age_t = int;
//typedef and using are same but using is more modern and recommended in c++11 and later versions
//typedef and using creats nickname/alias for data types
int main() {
    name_t name = "Sharif";
    age_t age = 99;
    std::cout << "Hello, I am " << name << '\n';
    std::cout << "My age is: " << age << '\n';
    return 0;
}