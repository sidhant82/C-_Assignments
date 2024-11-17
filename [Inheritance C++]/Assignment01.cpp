//Declare base class, declare variables a and b. Accept the values using member function. Perform add, sub, mult and div in derived class

#include <iostream>

using namespace std;

// Base class
class Base {
protected:
    int a, b; // Protected variables

public:
    // Member function to accept values
    void acceptValues() {
        cout << "Enter two integers:" << endl;
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
    }
};

// Derived class
class Derived : public Base {
public:
    // Function to perform addition
    void add() {
        cout << "Addition: " << (a + b) << endl;
    }

    // Function to perform subtraction
    void subtract() {
        cout << "Subtraction: " << (a - b) << endl;
    }

    // Function to perform multiplication
    void multiply() {
        cout << "Multiplication: " << (a * b) << endl;
    }

    // Function to perform division
    void divide() {
        if (b != 0) {
            cout << "Division: " << static_cast<double>(a) / b << endl; // Cast to double for accurate division
        } else {
            cout << "Division by zero is not allowed." << endl;
        }
    }
};

int main() {
    Derived obj;

    // Accept values
    obj.acceptValues();

    // Perform operations
    obj.add();
    obj.subtract();
    obj.multiply();
    obj.divide();

    return 0;
}
