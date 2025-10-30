// create a student
#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no;
    float marks;
    student(string n,int r,float m)
    {
        name=n;
        roll_no=r;
        marks=m;
    }
    void display()
    {
        cout<<"name: "<<name<<endl;
         cout<<"roll number:  "<<roll_no<<endl;
          cout<<"marks: "<<marks<<endl;
    }
   
};

int main()
{
    string name;
    int roll_no;
    float marks;
    cout<<"enter the name";
    cin>>name;
    cout<<"enter the roll no";
    cin>>roll_no;
    cout<<"enter the marks";
    cin>>marks;
    
    student s1( string name,int roll_no,float marks);
    s1.display();

    return 0;
}