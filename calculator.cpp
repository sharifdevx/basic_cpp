#include <iostream>
int main() {
    using std::cout;
    using std::cin;
    double num1, num2, result;
    char op;
    cout << "*************Calculator************" << '\n';
    cout << "Enter #1: " << '\n';
    cin >> num1;
    cout << "Enter operator either: (+, -, *, /) " << '\n';
    cin >> op;
    cout << "Enter #2: " << '\n';
    cin >> num2;
    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "The answer is: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            cout << "The answer is: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            cout << "The answer is: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            cout << "The answer is: " << result << '\n';
            break;
        default:
            cout << "Invalid operator!" << '\n';
            break;
    }
    cout << "***********************************" << '\n';
    return 0;
}