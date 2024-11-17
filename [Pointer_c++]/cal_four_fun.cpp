//Four function calculator using references.

#include <iostream>

void add(double a, double b, double& result) {
    result = a + b;
}

void subtract(double a, double b, double& result) {
    result = a - b;
}

void multiply(double a, double b, double& result) {
    result = a * b;
}

void divide(double a, double b, double& result) {
    if (b != 0) {
        result = a / b;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
        result = 0; // Assign a default value
    }
}

int main() {
    double num1, num2, result;
    char operation;

    std::cout << "Enter two numbers: ";
 
