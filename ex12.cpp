#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string m3;
    ofstream m1("demo.txt");
    m1<<"demo file";
    m1.close();
    ifstream m2("demo.txt");
    while(getline(m2,m3))
    {
        cout<<m3;

    }
    m2.close();
    return 0;
}
   
