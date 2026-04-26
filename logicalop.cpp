#include <iostream>
int main() {
    int temperature, humidity, windspeed;
    using std::cout;
    using std::cin;
    cout << "Enter the temperature: " << '\n';
    cin >> temperature;
    if (temperature < 30 && temperature > 0) {
        cout << "The weather is perfect" << '\n';
    }
    else {
        cout << "The weather is bad" << '\n';
    }

    cout << "Enter the humidity: " << '\n';
    cin >> humidity;
    if (humidity < 50 || humidity > 80) {
        cout << "The humidity is perfect" << '\n';
    }
    else {
        cout << "The humidity is bad" << '\n';
    }

    cout << "Enter the wind speed: " << '\n';
    cin >> windspeed;
    if (windspeed != 0) {
        cout << "The wind speed is perfect" << '\n';
    }
    else {
        cout << "The wind speed is bad" << '\n';
    }
    return 0;
}