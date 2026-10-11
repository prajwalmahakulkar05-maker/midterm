
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
        cin >> rollNo:63 >> name=dhiraj >> marks=23;
    }

    void display() {
        cout << "Roll No: " << rollNo;
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
