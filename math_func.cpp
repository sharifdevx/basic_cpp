#include <iostream>
#include <cmath>
int main() {
    /* double x = 3, y = 4, z;
    // z = std::max(x, y);
    // z = std::min(x, y);0
    // z = pow (2, 3);
    // z = sqrt(16);
    // z = abs(5); // [to get modulus of a number]
    // z = round(5.9); // [to round off a number to the nearest integer]
    // z = ceil(5.2); // [to round UP a number to the nearest integer]
    // z = floor(7.9); // [to round DOWN a number to the nearest integer]
    std::cout << z; */
    double a, b, c;
    std::cout << "Enter the two sides of the triagle: " << '\n';
    std::cin >> a >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The hypotenuse(otibuj) of the triangle is: " << c;
    return 0;
}