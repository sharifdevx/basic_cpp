#include <iostream>

namespace first {
        int x = 1;
    }
    namespace second {
        int x = 2;
    }

int main() {

    std::cout << first::x << '\n';
    using namespace second;
    std::cout << x << '\n';



    using std::cout;
    using std::string;
    cout << "Hello, World!" << std::endl;
    string name = "Sharif";
    cout << "Hello, I am " << name << std::endl;

    /*using namespace std;
    string name = "Sharif";
    cout << "Hello, I am " << name << endl;*/

    return 0;
}