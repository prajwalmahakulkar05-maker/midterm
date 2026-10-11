
#include <iostream>
using namespace std;

class Array {
    int a[10];

public:
    void input() {
        cout << "Enter 10 integers: ";
        for (int i = 0; i < 10; i++)
            cin >> a[i];
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < 10; i++)
            cout << a[i] << " ";
    }
};

int main() {
    Array obj;
    obj.input();
    obj.display();
    return 0;
}
