#include<iostream>
using namespace std;
class student{
    public:
     int num;
     float mark;
};
int main()
{
    int num;
     float mark;
    student s1;
    s1.num=14;
    s1.mark=98.2;

    cout<<"num:"<<num;
    cout<<"marks:"<<mark;
}