#include <iostream>
using namespace std;

// Function to calculate area of a rectangle
float area(float length, float width) {
    return length * width;
}

// Function to calculate area of a triangle
float area(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float length, width, base, height;

    // For rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << area(length, width) << endl;

    // For triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << area(base, height) << endl;

    return 0;
}
