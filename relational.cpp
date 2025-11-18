#include <iostream>
using namespace std;
class Point {
private:
    int x, y;

public:
    Point(int num1 = 0, int num2 = 0)  {
        x=num1;
        y=num2;
    }

    const Point operator>() 
    {
        if x>y:
        {
            return x;
        }
        else:
        {
            return y;
        }
    }

    const void display()
 {
    const Point operator>() 
    

    }
};

int main() {
    Point p1(10, 20);
    p1.display();
    Point p2 = -p1;
    p2.display(); 
    
    return 0;
}