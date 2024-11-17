//C++ program to demonstrate example of hierarchical inheritance to get square and cube of a number.


#include <iostream>

using namespace std;

// Base class
class Number {
protected:
    int num;

public:
    // Function to accept a number
    void setNumber(int n) {
        num = n;
    }
};

// Derived class for square
class Square : public Number {
public:
    // Function to calculate and display the square
    void displaySquare() {
        cout << "Square of " << num << " is: " << (num * num) << endl;
    }
};

// Derived class for cube
class Cube : public Number {
public:
    // Function to calculate and display the cube
    void displayCube() {
        cout << "Cube of " << num << " is: " << (num * num * num) << endl;
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Create objects of derived classes
    Square squareObj;
    Cube cubeObj;

    // Set the number in both objects
    squareObj.setNumber(number);
    cubeObj.setNumber(number);

    // Display the square and cube
    squareObj.displaySquare();
    cubeObj.displayCube();

    return 0;
}
