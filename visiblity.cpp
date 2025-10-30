// program to demonstrate the visibility mode in c++
#include <iostream>
using namespace std;    
class animal {
   public:
    void show() {
        cout << "animal class " << endl;
    }
};
class dog : protected animal { 
   public:
    void display() 
    {
        cout << "dog class " << endl;
        show(); 
    }
};
int main() {
    dog obj;
    obj.display();

    return 0;
}   
