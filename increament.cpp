#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int i=5;
    int j=2;
    int x1,y1;
    a=++i;
    b=j++;
    cout<<a<<endl;
    cout<<b<<endl;
    x1=i--;
    y1=j--;
    cout<<x1<<endl;
    cout<<y1<<endl;
    return 0;
}