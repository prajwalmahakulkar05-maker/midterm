
#include <iostream>
using namespace std;

class Calculator {
public:
    float a, b;

    void accept() {
        cout << "a=5, b=3: ";
        cin >> a >> b;
    }

    void calculate() {
        cout << "Addition = " << a + b;
        cout << "\nSubtraction = " << a - b;
        cout << "\nMultiplication = " << a * b;

        if (b != 0)
            cout << "\nDivision = " << a / b;
        else
            cout << "\nDivision by zero is undefined";
    }
};

int main() {
    Calculator c;
    c.accept();
    c.calculate();
    return 0;
}
