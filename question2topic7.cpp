
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

    void largest() {
        int max = a[0];
        for (int i = 1; i < 5; i++)
            if (a[i] > max)
                max = a[i];

        cout << "Largest element = " << max;
    }
};

int main() {
    Array obj;
    obj.input();
    obj.largest();
    return 0;
}
