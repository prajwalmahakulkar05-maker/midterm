#include <iostream>
using namespace std;

class Rectangle {
public:
    float length, breadth;

    void input() {
        cin >> length >> breadth;
    }

    void area() {
        cout << "Area = "
             << length * breadth;
    }
};

int main() {
    Rectangle r;
    r.input();
    r.area();
    return 0;
}