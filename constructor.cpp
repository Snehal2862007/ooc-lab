#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
//constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    //function
    int area() {
        return length * breadth;
    }
    //function
    int perimeter() {
        return 2 * (length + breadth);
    }
    //function
    void display() {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main() {
    int l, b;
    cout << "Enter length of rectangle: ";
    cin >> l;
    cout << "Enter breadth of rectangle: ";
    cin >> b;
    //constuctor calling
    Rectangle rect(l, b);

    rect.display();

    return 0;
}
