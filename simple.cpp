// simple inheritance
#include<iostream>  
using namespace std;    
class animal {
   public:
    void show() {
        cout << "animal class " << endl;
    }
};
class dog : private animal { 
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