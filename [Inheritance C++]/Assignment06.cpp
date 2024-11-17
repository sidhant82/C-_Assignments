//C++ program to demonstrate example of multilevel inheritance.

#include <iostream>
#include <string>

using namespace std;

// Base class
class Animal {
public:
    void speak() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal walks on land." << endl;
    }
};

// Further derived class
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog barks: Woof Woof!" << endl;
    }
};

int main() {
    Dog myDog;

    // Call functions from each class
    myDog.speak(); // From Animal
    myDog.walk();  // From Mammal
    myDog.bark();  // From Dog

    return 0;
}
