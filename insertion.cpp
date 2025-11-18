#include <iostream>
using namespace std;
class MyClass {
private:
    int data1;
    double data2;

public:
    MyClass(int d1 = 0, double d2 = 0.0):data1(d1),data2(d2)  {
         
    }

    friend ostream& operator<<(ostream& os, const MyClass& obj) {
        os << "Data1: " << obj.data1 << ", Data2: " << obj.data2;
        return os;
    }
    friend istream& operator>>(istream& is, MyClass& obj) {
        cout << "Enter Data1: ";
        is >> obj.data1;
        cout << "Enter Data2: ";
        is >> obj.data2;
        return is;
    }
};

int main() {
    MyClass obj1(10, 20.5);
    MyClass obj2;

    cout << "Object 1: " << obj1 << endl;

    cout << "Enter values for Object 2:" << endl;
    cin >> obj2;

    cout << "Object 2: " << obj2 << endl;

    return 0;
}