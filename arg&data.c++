#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

double add(double a, double b) {
    return a + b;
}

double add(int a, double b) {
    return a + b;
}

double add(double a, int b) {
    return a + b;
}

int main() {
    int intResult1 = add(10, 20);
    int intResult2 = add(10, 20, 30);
    double doubleResult1 = add(10.5, 20.5);
    double doubleResult2 = add(10, 20.5);
    double doubleResult3 = add(10.5, 20);

    cout << "Sum of 10 and 20: " << intResult1 << endl;
    cout << "Sum of 10, 20, and 30: " << intResult2 << endl;
    cout << "Sum of 10.5 and 20.5: " << doubleResult1 << endl;
    cout << "Sum of 10 and 20.5: " << doubleResult2 << endl;
    cout << "Sum of 10.5 and 20: " << doubleResult3 << endl;

    return 0;
}
