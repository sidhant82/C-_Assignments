//C++ program to demonstrate example of Hybrid inheritance.

#include <iostream>
#include <string>

using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Function to accept person details
    void setDetails(const string &n, int a) {
        name = n;
        age = a;
    }

    // Function to display person details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class from Person
class Student : public Person {
protected:
    int studentID;

public:
    // Function to set student details
    void setStudentDetails(const string &n, int a, int id) {
        setDetails(n, a);
        studentID = id;
    }

    // Function to display student details
    void displayStudentDetails() {
        displayDetails();
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class from Person
class Employee : public Person {
protected:
    int employeeID;

public:
    // Function to set employee details
    void setEmployeeDetails(const string &n, int a, int id) {
        setDetails(n, a);
        employeeID = id;
    }

    // Function to display employee details
    void displayEmployeeDetails() {
        displayDetails();
        cout << "Employee ID: " << employeeID << endl;
    }
};

// Derived class from both Student and Employee
class Intern : public Student, public Employee {
private:
    string internshipCompany;

public:
    // Function to set intern details
    void setInternDetails(const string &n, int a, int studentID, int employeeID, const string &company) {
        Student::setStudentDetails(n, a, studentID);
        Employee::setEmployeeDetails(n, a, employeeID);
        internshipCompany = company;
    }

    // Function to display intern details
    void displayInternDetails() {
        cout << "Intern Details:" << endl;
        Student::displayStudentDetails();
        Employee::displayEmployeeDetails();
        cout << "Internship Company: " << internshipCompany << endl;
    }
};

int main() {
    Intern intern;

    // Set intern details
    intern.setInternDetails("Alice", 20, 123, 456, "Tech Corp");

    // Display intern details
    intern.displayInternDetails();

    return 0;
}
