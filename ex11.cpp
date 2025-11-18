#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculate_salary() = 0;  // pure virtual function
};

class Salaried : public Employee {
    int bonus;
    int payment;
public:
    Salaried(int b, int p) {
        bonus = b;
        payment = p;
    }
    void calculate_salary() override {
        cout << "Salary of salaried employee = " << (bonus + payment) << endl;
    }
};

class Hourly : public Employee {
    int payment;
    int hours;
public:
    Hourly(int p, int h) {
        payment = p;
        hours = h;
    }
    void calculate_salary() override {
        cout << "Salary of hourly employee = " << (payment * hours) << endl;
    }
};

int main() {
    Employee* e;

    e = new Salaried(100, 50);
    e->calculate_salary();
    delete e;

    e = new Hourly(100, 6);
    e->calculate_salary();
    delete e;

    return 0;
}
