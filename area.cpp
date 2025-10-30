#include <iostream>
using namespace std;

int main() {
    
    constexpr double PI = 3.14159;     
    double radius;
    cout << "Enter radius of circle: ";
    cin >> radius;
    double area = PI * radius * radius;
    cout << "Area of circle = " << area << endl;
    return 0;
}
