
#include <iostream>
using namespace std;

class Array {
    int a[5];

public:
    void input() {
        cout << "Enter 5 numbers: ";
        for (int i = 0; i < 5; i++)
            cin >> a[i];
    }

    void calculate() {
        int sum = 0;
        for (int i = 0; i < 5; i++)
            sum += a[i];

        cout << "Sum = " << sum << endl;
        cout << "Average = " << sum / 5.0;
    }
};

int main() {
    Array obj;
    obj.input();
    obj.calculate();
    return 0;
}
