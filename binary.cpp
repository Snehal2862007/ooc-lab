#include <iostream>
using namespace std;
class Complex {
private:
  double real, imag;

public:
  Complex(double r = 0.0, double i = 0.0)   
  {
    real=r;
    imag=i;
  }
  Complex operator-(const Complex& other) 
  const {
    return Complex(real - other.real, imag - other.imag);
  }
  
  void display()
  const {
    cout << real << " - " << imag << "i" << endl;
  }
};

int main() {
  Complex c1(3.0, 4.0);
  Complex c2(2.0, 5.0);
  

  Complex sub = c1 - c2;
  
  sub.display();
  
  return 0;
}
