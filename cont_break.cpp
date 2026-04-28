#include <iostream>

int main() {
    for(int i = 1; i <= 20; i += 1) {
        if(i ==12) {
            //break; //skip the number in condition and stops
            continue;//skip the number in the condition and continues
        }
        std::cout << i << '\n';
    }
    return 0;
}