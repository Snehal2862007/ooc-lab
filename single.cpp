#include<iostream>
using namespace std;
class vechicle  //parent class
{
    public:
   
    void speed()
    {
cout<<"speed is more"<<endl;

    }
};
class car  //child class
{
    public:
    void price()
    {   
        cout<<"price is less"<<endl;


    }

};
int main()
{
    vechicle v1;
      v1.speed();
    car c1 ;
      c1.price();
    return 0;
}
