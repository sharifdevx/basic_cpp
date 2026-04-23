#include <iostream>
int main() {
    int students = 50;
    //students = students + 1;
    //students += 1;
    //students++;
    //students = students - 1;
    //students -= 1;
    //students--;
    //students *= 2; //students = students * 2;
    students /= 2; //students = students / 2;
    std::cout << "Number of students: " << students << '\n';
    int remainder  = students % 2;
    std::cout << "Remainder: " << remainder << '\n' << "So number of students is odd." << std::endl;

    return 0;
}