
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int rollNo;
    float marks;

    cout << "dhiraj: ";
    getline(cin, name);

    cout << "62: ";
    cin >> rollNo;

    cout << "23: ";
    cin >> marks;

    cout << "\nName: " << name;
    cout << "\nRoll Number: " << rollNo;
    cout << "\nMarks: " << marks;

    return 0;
}
