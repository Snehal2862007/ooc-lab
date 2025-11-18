#include<iostream>
using namespace std;
int main()
{
    const double PI=3.14;
    double r;
    cout<<"enter a radius";
    cin>>r;
    double area=PI*r*r;
    cout<<"area of circle is : "<<area<<endl;
    double cir=2*PI*r*r;
    cout<<"circumferences of circle is : "<<cir<<endl;
   
    return 0;

} 