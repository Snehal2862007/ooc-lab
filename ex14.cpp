#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

template <class T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Maximum of 10 and 20: " << getMax(10, 20) << endl;
    cout << "Maximum of 5.5 and 2.3: " << getMax(5.5, 2.3) << endl;

    vector<int> v = {1, 2, 3};
    v.push_back(4);
    cout << "\nVector elements: ";
    for (int x : v) cout << x << " ";

    list<string> names = {"Snehal", "Ravi", "Asha"};
    names.push_back("Meena");
    cout << "\nList elements: ";
    for (string s : names) cout << s << " ";

    map<int, string> student;
    student[1] = "Snehal";
    student[2] = "Rohan";
    student[3] = "Aditi";

    cout << "\n\nMap elements:\n";
    for (auto &p : student)
        cout << "Roll No: " << p.first << ", Name: " << p.second << endl;

    return 0;
}
