#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the volume of a cylindrical container
double volume(double radius, double height) {
    return M_PI * radius * radius * height;  // Volume of cylinder: π * r^2 * h
}

// Function to calculate the volume of a cubic container
double volume(double side) {
    return pow(side, 3);  // Volume of cube: side^3
}

int main() {
    double radius, height, side;

    // For cylindrical container
    cout << "Enter the radius and height of the cylindrical container: ";
    cin >> radius >> height;
    cout << "Volume of the cylindrical container: " << volume(radius, height) << " cubic units" << endl;

    // For cubic container
    cout << "Enter the side length of the cubic container: ";
    cin >> side;
    cout << "Volume of the cubic container: " << volume(side) << " cubic units" << endl;

    return 0;
}
