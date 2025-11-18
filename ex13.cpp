#include <iostream>
#include <stdexcept>
using namespace std;

class InvalidAgeException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid Age! Age must be greater than 0.";
    }
};

class Person {
    int age;
public:
    void setAge(int a) {
        if (a <= 0)
            throw InvalidAgeException(); 
        age = a;
    }
    void display() {
        cout << "Age of person: " << age << endl;
    }
};

int main() {
    int num, den;
    cout << "Enter numerator and denominator: ";
    cin >> num >> den;

    try {
        if (den == 0)
            throw runtime_error("Division by zero error!");
        cout << "Result = " << (float)num / den << endl;
    }
    catch (runtime_error &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    Person p;
    try {
        int a;
        cout << "\nEnter age of person: ";
        cin >> a;
        p.setAge(a);
        p.display();
    }
    catch (InvalidAgeException &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
