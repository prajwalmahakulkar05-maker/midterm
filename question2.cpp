#include <iostream>
using namespace std;

class Employee {
public:
    int empId;
    string name;
    float salary;

    void input() {
        cin >> empId >> name >> salary;
    }

    void display() {
        cout << empId << " " << name
             << " " << salary;
    }
};

int main() {
    Employee e;
    e.input();
    e.display();
    return 0;
}