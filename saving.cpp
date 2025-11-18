#include <iostream>
#include <string>
using namespace std;

class Saving {
public:
    char holder_name[50];
    string account_num;
    float current_balance = 5000.0;

    void getDetails() {
        cout << "Enter the name: ";
        cin >> holder_name;
        cout << "Enter the account number: ";
        cin >> account_num;
       
    }

    void showDetails() {
        cout << "Name: " << holder_name << endl;
        cout << "Account number: " << account_num << endl;
        cout << "Balance: " << current_balance << endl;
        if (current_balance <= 0) {
            cout << "Your account is overdrawn" << endl;
        }
    }
       void  withdrawn(){
           float amount;
           cout<<"Enter the amount to be withdrawn:";
              cin>>amount;
                if(amount>current_balance){
                    cout<<"Insufficient balance"<<endl;
                }
                else{
                    current_balance-=amount;
                    cout<<"Amount withdrawn successfully"<<endl;
                    cout<<"New balance is:"<<current_balance<<endl; 
                   }
    }


};



int main() {
    Saving s;
    cout << " the details of bank holder:" << endl;
    s.getDetails();
    cout << "\nAccount details:" << endl;
    s.showDetails();
    s.withdrawn();
    return 0;
}