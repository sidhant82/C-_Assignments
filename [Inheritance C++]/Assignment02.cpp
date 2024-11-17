//Define base class student members as rollno, name, total and avg.  Define the derived for mech,E&TC and computer branches. Accept marks of subjects in derived class. Calculate and print total avg.

#include <iostream>
#include <string>

using namespace std;

// Base class
class Student {
protected:
    int rollno;
    string name;
    float total;
    float avg;

public:
    // Function to accept student details
    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollno;
        cout << "Enter Name: ";
        cin.ignore(); // Ignore the newline character left by cin
        getline(cin, name);
    }

    // Function to display student details
    void displayDetails() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << avg << endl;
    }
};

// Derived class for Mechanical branch
class Mech : public Student {
public:
    void acceptMarks() {
        float marks[5]; // Assuming 5 subjects
        cout << "Enter marks for Mechanical branch subjects (5 subjects):" << endl;
        total = 0;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
            total += marks[i];
        }
        avg = total / 5; // Calculate average
    }
};

// Derived class for E&TC branch
class EAndTC : public Student {
public:
    void acceptMarks() {
        float marks[5]; // Assuming 5 subjects
        cout << "Enter marks for E&TC branch subjects (5 subjects):" << endl;
        total = 0;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
            total += marks[i];
        }
        avg = total / 5; // Calculate average
    }
};

// Derived class for Computer branch
class Computer : public Student {
public:
    void acceptMarks() {
        float marks[5]; // Assuming 5 subjects
        cout << "Enter marks for Computer branch subjects (5 subjects):" << endl;
        total = 0;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
            total += marks[i];
        }
        avg = total / 5; // Calculate average
    }
};

int main() {
    int choice;
    Student* student = nullptr; // Pointer to base class

    cout << "Select Branch:" << endl;
    cout << "1. Mechanical" << endl;
    cout << "2. E&TC" << endl;
    cout << "3. Computer" << endl;
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            student = new Mech();
            break;
        case 2:
            student = new EAndTC();
            break;
        case 3:
            student = new Computer();
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    // Accept student details and marks
    student->acceptDetails();
    dynamic_cast<Mech*>(student) ? dynamic_cast<Mech*>(student)->acceptMarks() :
    dynamic_cast<EAndTC*>(student) ? dynamic_cast<EAndTC*>(student)->acceptMarks() :
    dynamic_cast<Computer*>(student)->acceptMarks();

    // Display student details
    student->displayDetails();

    delete student; // Free allocated memory
    return 0;
}
