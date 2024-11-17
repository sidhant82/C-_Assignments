//C++ program to demonstrate example of multiple inheritance.


#include <iostream>
#include <string>

using namespace std;

// First base class
class Base1 {
protected:
    int value1;

public:
    // Function to accept value for Base1
    void setValue1(int v) {
        value1 = v;
    }

    // Function to display value from Base1
    void displayValue1() {
        cout << "Value from Base1: " << value1 << endl;
    }
};

// Second base class
class Base2 {
protected:
    string value2;

public:
    // Function to accept value for Base2
    void setValue2(const string &v) {
        value2 = v;
    }

    // Function to display value from Base2
    void displayValue2() {
        cout << "Value from Base2: " << value2 << endl;
    }
};
