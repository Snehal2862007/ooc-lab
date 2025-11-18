// library system
#include <iostream>
#include <string>

using namespace std;
class Book {
private:
    string title;
    string author;
    bool is_available;

public:
    void get_book_info() {
        cout << "Enter title: ";
        cin >> title;
        cout << "enter author : ";
        cin>>author;
    }
    void display_book_info() {
        cout << "Title: " << title << endl;
        cout << "author: " << author << endl;
    }
};

class Member : public Book {
private:    
    string member_name;
    int member_id;  
public:
    void get_member_info() {
        cout << "Enter member name: ";
        cin >> member_name;
        cout << "Enter member ID: ";
        cin >> member_id;
    }
    void display_member_info() {
        cout << "Member Name: " << member_name << endl;
        cout << "Member ID: " << member_id << endl;
    }
};
class Library : public Member {
public:
    void display_library_info() {
        display_book_info();
        display_member_info();
    }
};
int main() {
    Library lib;
    lib.get_book_info();
    lib.get_member_info();
    lib.display_library_info();
    return 0;
}
