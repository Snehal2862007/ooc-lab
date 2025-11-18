#include <iostream>
#include <fstream>
#include<iomanip>
#include<vector>
#include<string>
#include<stdexcept>
#include<algorithm>
using namespace std;

class person{
    protected:
        string name;
        string phone;

    public:
        virtual void input()=0;
        virtual void display()=0;
        virtual ~person() {}
};


class customer:public person{
    int roomnumber;
    int daysstayed;
public:
    void input()override{
        cout<<"\n enter customer name: ";
        getline(cin>>ws,name);
        cout<<"enter phone number: ";
        cin>>phone;
        cout<<"enter room number: ";
        cin>>roomnumber;
        cout<<"enter number of days stayed: ";
        cin>>daysstayed;
    }
    void display()override{
            cout<<"\n----customer details----\n";
            cout<<"name: "<<name;
            cout<<"\nphone: "<<phone;
            cout<<"\nRoom Number: "<<roomnumber;
            cout<<"\nDays stayed : "<<daysstayed<<endl;
 }
    int getroom(){return roomnumber;}
    string getname(){return name;}
    int getdays(){return daysstayed;}
    
};


class bill{
public:
    virtual float calculatetotal()=0;
    virtual void displaybill()=0;    
    virtual ~bill(){}

};
class RoomBill:public bill{
    float roomrate;
    int days;
public:
    RoomBill(float rate,int d):roomrate(rate),days(d){}
    float calculatetotal() override{
        return roomrate * days;
    }

    void displaybill()override{
        cout<<"room charge: rs."<<roomrate
            <<"x"<<days
            <<"days= rs."<<calculatetotal()<<endl;
   }
};


    class foodbill:public bill{
        vector<pair<string, float>>items;
    public:
    void orderfood(){
        int choice;
        do{
            cout<<"\n---food menu---\n";
            cout<<"1. breakfast(Rs.150)\n";
            cout<<"2. lunch(Rs.300)\n";
            cout<<"3. dinner(Rs.350)\n";
            cout<<"4. exit\nenter choice:";
            cin>>choice;
            switch(choice){
                case 1:items.push_back({"breakfast",150});
                break;            
                case 2:items.push_back({"lunch",300});
                break;    
                case 3:items.push_back({"dinner",350});
                break;
                default: cout<<"invalid choice!\n";

            }
        }while(choice!=4);
        }

        float calculatetotal()override{
            float total=0;
            for(auto& i:items)
                total+=i.second;
            return total;
        }
        void displaybill()override{
            cout<<"\n---food bill---\n";
            for(auto& i:items)
               cout<<setw(10)<<left<<i.first<<": Rs."<<i.second<<endl;
            cout<<"total food bill is: Rs."<<calculatetotal()<<endl;

        } 
    };
  
  class manager{
    vector<int> vacantrooms;
    vector<int> filledrooms;
public:
    manager(){
        for(int i=101;i<=110;i++) vacantrooms.push_back(i);
    }
    void showroom(){
        cout<<"\nvacant rooms: ";
        for(int r:vacantrooms) cout<<r<<" ";
        cout<<"\nfilledrooms: ";
        for(int r:filledrooms)cout<<r<<" ";
        cout<<endl;
    }

    int assignroom(){
        if(vacantrooms.empty())
{
    throw runtime_error("no vacant rooms available!");

}
int room=vacantrooms.front();
filledrooms.push_back(room);
vacantrooms.erase(vacantrooms.begin());
cout<<"assigned room: "<<room<<endl;
return room;   
}

  void vacateroom(int room){
filledrooms.erase(remove(filledrooms.begin(),filledrooms.end(),room),filledrooms.end());

  }
};


int main(){
    manager manager;
    customer customer;
    foodbill food;
    bill* roombill=nullptr;
    int choice;
    float roomrate=1000;
    cout<<"====HOTEL MANAGEMENT BILLING SYSTEM====\n";
    try{
        while(true){
        cout <<"\n1.View Room Status"
             <<"\n2.Add Customer"
             <<"\n3.order food"
             <<"\n4.show bill and save "
             <<"\n5.exit "
             <<"\nEnter choice: ";
        cin>>choice;
        cin.ignore();

        if(choice==1){
            manager.showroom();
        }
        else if(choice==2)
        {
            customer.input();
            manager.assignroom();
            delete roombill;
            roombill=new RoomBill(roomrate,customer.getdays());

        }
        else if(choice==3){
            food.orderfood();

        }
        else if(choice==4){
            if(!roombill){
            cout<<"No Customer Addeded Yet!\n";
            continue;
        }
        float total=roombill->calculatetotal()+food.calculatetotal();
        cout<<"\n\n====Final Bill===\n";
        customer.display();
        roombill->displaybill();
        food.displaybill();
        cout<<"\nTOTAL AMOUNT:  Rs. "<<total<<endl;
        
        
        ofstream file("Hotel_Bill.doc",ios::app);
        file<<"\n===================\n";
        file<<"customer name: "<<customer.getname()<<endl;
        file<<"Room Number: "<<customer.getroom()<<endl;
        file<<"Room Bill: Rs. "<<roombill->calculatetotal()<<endl;
        file<<"Food BIl: Rs. "<<food.calculatetotal()<<endl;
        file<<"Total: Rs."<<total<<endl;
        file<<"===========================\n";
        file.close();

        cout<<"\nBill save to 'Hotel_Bill.doc'\n";
    }
    else if (choice==5){
        cout<<"Thank You For Visiting ....\n";
        break;

    }
    else{
        cout<<"Invalid choice!\n";

    }
}
}
catch(exception& e){
    cout<<"Error: "<<e.what()<<endl;
} 
delete roombill;
return 0;
}