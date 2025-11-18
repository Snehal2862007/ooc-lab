#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    Rectangle() 
    {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b) 
    {
        length = l;
        breadth = b;
    }

    Rectangle(int side) 
    {
        length = side;
       
    }

    int area() 
    {
        return length * breadth;
    }

    int perimeter() 
    {
        return 2 * (length + breadth);
    }
    
    int areas() 
    {
        return length*length ;
    }

    int perimeters() 
    {
        return 4*((length)*(length));
    }
    void display()
    {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
        cout << "Area f rectangle: " << area() << endl;
        cout << "Perimeter of rectangle: " << perimeter() << endl << endl;
        
    }
    void square()
    {
        cout << "Area f square : " << areas() << endl;
        cout << "Perimeter of square: " << perimeters() << endl << endl;
    }
};

int main() {
    Rectangle r1;
    r1.display();

    Rectangle r2(7,5 );
    r2.display();

    Rectangle r3(5);
    r3.square();

    return 0;
}
