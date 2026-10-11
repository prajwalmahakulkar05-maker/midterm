
#include <iostream>
using namespace std;

class Number {
public:
    int n;

    void accept() {
        cout << "Enter a number:2 ";
        cin >> n;
    }

    void checkPrime() {
        if (n < 2) {
            cout << "Not Prime";
            return;
        }

        for (int i = 2; i <= n / i; i++) {
            if (n % i == 0) {
                cout << "Not Prime";
                return;
            }
        }

        cout << "Prime Number";
    }
};

int main() {
    Number num;
    num.accept();
    num.checkPrime();
    return 0;
}
