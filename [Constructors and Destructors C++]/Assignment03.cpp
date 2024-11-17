//Using Copy constructor, copy values of one class to other.

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollno;
    string name;

public:
    // Parameterized constructor
    Student(int r, string n) : rollno(r), name(n) {}

    // Copy constructor
    Student(const Student &s) {
        rollno = s.rollno; // Copy rollno
        name = s.name;     // Copy name
        cout << "Copy constructor called." << endl;
    }

    // Method to display rollno and name
    void display() const {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    // Create a Student object using the parameterized constructor
    Student student1(101, "John Doe");

    // Display the original student's details
    cout << "Original Student:" << endl;
    student1.display();

    // Create another Student object using the copy constructor
    Student student2 = student1; // This calls the copy constructor

    // Display the copied student's details
    cout << "Copied Student:" << endl;
    student2.display();

    return 0;
}
