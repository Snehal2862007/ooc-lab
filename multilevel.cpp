// multilevel inheritance student database
#include <iostream>
#include <string>
using namespace std;
class Student {
protected:
    int roll_no;
    string name;   
public:
    void get_student_info() {
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter name: ";
        cin>>name;
    }
    void display_student_info() {
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};
class test : public Student {
protected:  
    float marks[5];
public:
    void get_marks() {  
        cout << "Enter marks for 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }       
    void display_marks() {
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }   
    float calculate_total() {
        float total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total;
    }
    float calculate_average() {
        return calculate_total() / 5;
    }
    char determine_grade() {
        float avg = calculate_average();
        if (avg >= 90) return 'A';
        else if (avg >= 80) return 'B';
        else if (avg >= 70) return 'C';
        else if (avg >= 60) return 'D';
        else return 'F';
    }
};
class Result : public test {
public:
    void display_result() {
        display_student_info();
        display_marks();
        cout << "Total Marks: " << calculate_total() << endl;
        cout << "Average Marks: " << calculate_average() << endl;
        cout << "Grade: " << determine_grade() << endl;
    }
};
int main() {
    Result student;
    student.get_student_info();
    student.get_marks();
    student.display_result();
    return 0;
}





