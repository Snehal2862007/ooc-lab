#include<iostream>
using namespace std;
int main()
{
    int a=12;
    int b=4;
    int c=a*b;
    cout<<"the product of "<< a<<" and"<< b<< "is : "<<c<<endl;
    int *ptr=&a;
    cout<<"address a is : "<<ptr<<endl;
    int d=~a;
    cout<<"the bitwise not if a is: "<<d<<endl;
return 0;
}