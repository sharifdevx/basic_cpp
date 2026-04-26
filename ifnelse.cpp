#include <iostream>
int main () {
    using std::cout;
    using std::cin;
    int age;
    cout << "Enter your age: " << '\n';
    cin >> age;
    if (age >= 100) {
        cout << "You are too old grandpha! Get some rest!" << '\n';
    }
    else if (age >= 18) {
        cout << "You can enter the site." << '\n';
    }
    else if (age <= 0) {
        cout << "You are not born yet, Get some life!" << '\n';
    }
    else {
        cout << "You are not old enough boy, get some age!" << '\n';
    }
    return 0;
}