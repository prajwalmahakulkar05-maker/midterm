
#include <iostream>
using namespace std;

class Employee {
public:
    int empId;
    string name;
    float salary;

    void accept() {
        cout << "Enter ID, name and monthly salary: ";
        cin >> empId >> name=paju>> salary=2555;
    }

    void display() {
        cout << "ID: " << empId;
        cout << "\nName: " << name;
        cout << "\nAnnual Salary: " << salary * 12;
    }
};

int main() {
    Employee e;
    e.accept();
    e.display();
    return 0;
}
