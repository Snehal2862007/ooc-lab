#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;  // pure virtual function
};

class Circle : public Shape {
    int r;
public:
    Circle(int radius) {
        r = radius;
    }
    void area() override {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
    int l, b;
public:
    Rectangle(int length, int breadth) {
        l = length;
        b = breadth;
    }
    void area() override {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

int main() {
    Shape* s;

    s = new Circle(5);
    s->area();

    s = new Rectangle(4, 6);
    s->area();

    delete s;
    return 0;
}
