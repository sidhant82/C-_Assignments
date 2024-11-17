//Write a friend function to add,sub,mult,div values from two different classes.

#include <iostream>

class ClassB; // Forward declaration

class ClassA {
private:
    int valueA;

public:
    ClassA(int val) : valueA(val) {}

    // Friend function declaration
    friend void performOperations(ClassA, ClassB);
};

class ClassB {
private:
    int valueB;

public:
    ClassB(int val) : valueB(val) {}

    // Friend function declaration
    friend void performOperations(ClassA, ClassB);
};

// Friend function definition
void performOperations(ClassA a, ClassB b) {
    std::cout << "Addition: " << (a.valueA + b.valueB) << std::endl;
    std::cout << "Subtraction: " << (a.valueA - b.valueB) << std::endl;
    std::cout << "Multiplication: " << (a.valueA * b.valueB) << std::endl;

    // Handle division carefully to avoid division by zero
    if (b.valueB != 0) {
        std::cout << "Division: " << static_cast<float>(a.valueA) / b.valueB << std::endl;
    } else {
        std::cout << "Division: Cannot divide by zero" << std::endl;
    }
}

int main() {
    ClassA objA(10);
    ClassB objB(5);
    
    performOperations(objA, objB);

    return 0;
}
