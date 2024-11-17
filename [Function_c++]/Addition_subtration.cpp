//Define the inline function to calculate addition and subtraction of 2 no.s
#include <iostream>

// Inline function for addition
inline int add(int a, int b) {
    return a + b;
}

// Inline function for subtraction
inline int subtract(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int sum = add(num1, num2);          // Call the inline function for addition
    int difference = subtract(num1, num2); // Call the inline function for subtraction

    std::cout << "Addition: " << num1 << " + " << num2 << " = " << sum << std::endl;
    std::cout << "Subtraction: " << num1 << " - " << num2 << " = " << difference << std::endl;

    return 0;
}
