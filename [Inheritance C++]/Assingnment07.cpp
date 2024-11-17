//Declare 2 bases classes. In derived class calculate add, sub multi and div of no.s

#include <iostream>

using namespace std;

// First base class
class Base1 {
protected:
    int a, b;

public:
    // Function to set values for a and b
    void setValues(int x, int y) {
        a = x;
        b = y;
    }
};

// Second base class
class Base2 {
protected:
    int result;

public:
    // Function to display the result
    void displayResult(const string& operation, int res) {
        cout << "Result of " << operation << ": " << res << endl;
    }
};

// Derived class
class Calculator : public Base1, public Base2 {
public:
    // Function to perform addition
    void add() {
        result = a + b;
        displayResult("Addition", result);
    }

    // Function to perform subtraction
    void subtract() {
        result = a - b;
        displayResult("Subtraction", result);
    }

    // Function to perform multiplication
    void multiply() {
        result = a * b;
        displayResult("Multiplication", result);
    }

    // Function to perform division
    void divide() {
        if (b != 0) {
            result = a / b;
            displayResult("Division", result);
        } else {
            cout << "Division by zero is not allowed." << endl;
        }
    }
};

int main() {
    Calculator calc;
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Set values in the calculator object
    calc.setValues(num1, num2);

    // Perform calculations
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();

    return 0;
}
