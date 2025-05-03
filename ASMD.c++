#include <iostream>
using namespace std;

// Function to add two numbers
int calculate(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int calculate(int a, int b, char op) {
    if (op == '-') {
        return a - b;
    }
    return 0; // Default return for invalid operator
}

// Function to multiply two numbers
int calculate(int a, int b, float dummy) {
    return a * b;
}

// Function to divide two numbers
float calculate(float a, float b) {
    if (b != 0) {
        return a / b;
    }
    cout << "Error: Division by zero!" << endl;
    return 0.0; // Return 0 if division by zero
}

int main() {
    int a, b;
    float f1, f2;
    char op;

    // Get input for integer operations
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Addition: " << calculate(a, b) << endl;

    cout << "Enter operator for subtraction (+ or -): ";
    cin >> op;
    cout << "Subtraction: " << calculate(a, b, op) << endl;
    cout << "Multiplication: " << calculate(a, b, 0.0f) << endl; // To trigger the multiplication version
    
    // Get input for floating-point division
    cout << "Enter two floating-point numbers for division: ";
    cin >> f1 >> f2;
    cout << "Division: " << calculate(f1, f2) << endl;

    return 0;
}
