//Write add function using function overloading to calculate average of Integers, 3 integers, 2 floats


#include <iostream>

using namespace std;

// Function to calculate the average of 3 integers
double add(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

// Function to calculate the average of 2 integers
double add(int a, int b) {
    return (a + b) / 2.0;
}

// Function to calculate the average of 2 floats
double add(float a, float b) {
    return (a + b) / 2.0;
}

int main() {
    int num1, num2, num3;
    float f1, f2;

    // Average of 3 integers
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Average of three integers: " << add(num1, num2, num3) << endl;

    // Average of 2 integers
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Average of two integers: " << add(num1, num2) << endl;

    // Average of 2 floats
    cout << "Enter two floats: ";
    cin >> f1 >> f2;
    cout << "Average of two floats: " << add(f1, f2) << endl;

    return 0;
}
