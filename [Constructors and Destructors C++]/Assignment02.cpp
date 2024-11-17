//Define constructor overloading for initializing the above example.


#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollno;
    string name;

public:
    // Default constructor
    Student() : rollno(0), name("Unknown") {}

    // Constructor with rollno only
    Student(int r) : rollno(r), name("Unknown") {}

    // Constructor with rollno and name
    Student(int r, string n) : rollno(r), name(n) {}

    // Method to print rollno and name
    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    // Creating a Student object using the default constructor
    Student student1;
    student1.display(); // Display default values

    // Creating a Student object using the constructor with rollno only
    Student student2(101);
    student2.display(); // Display rollno with default name

    // Creating a Student object using the constructor with rollno and name
    Student student3(102, "Alice");
    student3.display(); // Display rollno and name

    return 0;
}
