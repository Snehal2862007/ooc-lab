// multiple inheritance educational database
#include <iostream>
#include <string>
using namespace std;    
class Person {
protected:
    string name;
    int age;
public:
    void get_person_info() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void display_person_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student {
protected:
    int student_id;
    string course;
public:
    void get_student_info() {
        cout << "Enter student ID: ";
        cin >> student_id;
        cout << "Enter course: ";
        cin >> course;
    }
    void display_student_info() {
        cout << "Student ID: " << student_id << endl;
        cout << "Course: " << course << endl;
    }
};
class Teacher {
protected:
    int employee_id;
    string subject;
public:
    void get_teacher_info() {
        cout << "Enter employee ID: ";
        cin >> employee_id;
        cout << "Enter subject: ";
        cin >> subject;
    }
    void display_teacher_info() {
        cout << "teacher ID: " << employee_id << endl;
        cout << "Subject: " << subject << endl;
    }
};
class Educational : public Person, public Student, public Teacher {
public:
    void display_educational_info() {
        display_person_info();
        display_student_info();
        display_teacher_info();
    }
};  
int main() {
    Educational edu;
    edu.get_person_info();
    edu.get_student_info();
    edu.get_teacher_info();
    cout << "\nEducational Information:\n";
    edu.display_educational_info();
    return 0;
}
