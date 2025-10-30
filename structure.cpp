#include<iostream>
using namespace std;
struct student
{
  
    int rollnum;
    float marks;
    char div;


};
int main()
{
    student details;
    details.rollnum=10;
    details.marks=96.17;
    details.div='A';
    cout<<"Roll Number : "<<details.rollnum<<endl;
    cout<<"Marks : "<<details.marks<<endl;
    cout<<"Div : "<<details.div<<endl;
    return 0;

    
}