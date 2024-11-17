//Define constructor to initialize class members rollno, name. print rollno and name.

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollno;
    string name;

public:
    // Constructor to initialize rollno and name
    Student(int r, string n) : rollno(r), name(n) {}

    // Method to print rollno and name
    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    int roll;
    string studentName;

    // Input rollno and name
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter name: ";
    cin.ignore(); // To ignore the newline character left by cin
    getline(cin, studentName); // To read the full name

    // Create a Student object
    Student student(roll, studentName);

    // Display rollno and name
    student.display();

    return 0;
}
