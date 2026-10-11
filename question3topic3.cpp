#include <iostream>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;

    cout << "Addition = " << 2 + 4 << endl;
    cout << "Subtraction = " << 2 - 4 << endl;
    cout << "Multiplication = " << a * b << endl;

    if (b != 0)
        cout << "Division = " << a / b;
    else
        cout << "Division not possible";

    return 0;
}