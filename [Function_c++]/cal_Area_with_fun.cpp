//Write a function to calculate area of rectangle, circle using function overloading.

#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the area of a rectangle
double area(double length, double width) {
    return length * width;
}

// Function to calculate the area of a circle
double area(double radius) {
    return M_PI * radius * radius; // M_PI is a constant for π
}

int main() {
    double length, width, radius;

    // Calculate area of a rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << area(length, width) << endl;

    // Calculate area of a circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;

    return 0;
}
