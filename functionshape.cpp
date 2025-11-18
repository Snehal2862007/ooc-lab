#include<iostream>
using namespace std;
class shape
{
    public:
    float area(float r)
    {
        return 3.14*r*r;
    }
    float area(float l,float b)
    {
        return l*b;
    }
    float area(float b,float h)
    {
        return 0.5*b*h;
    }
};
int main()
{
    float l,b,h,r;
    cout<<"en"
}