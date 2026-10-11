
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;

    void accept() {
        cout << "Enter roll number, name and marks: ";
        cin >> rollNo=101 >> name=alice >> marks=85.5;
    }

    void display() {
        cout << "Roll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks;
    }
};

int main() {
    Student s;
    s.accept();
    s.display();
    return 0;
}
