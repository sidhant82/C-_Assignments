// Modify the above program for 5 customers( define array of objects).

#include <iostream>
#include <string>

using namespace std;

// Define the Customer class
class Customer {
public:
    int id;
    string name;
    string email;

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Email: " << email << endl;
    }
};

int main() {
    // Create an array of 5 Customer objects
    Customer customers[5] = {
        {1, "Alice", "alice@example.com"},
        {2, "Bob", "bob@example.com"},
        {3, "Charlie", "charlie@example.com"},
        {4, "Diana", "diana@example.com"},
        {5, "Ethan", "ethan@example.com"}
    };

    // Display customer details
    for (int i = 0; i < 5; i++) {
        customers[i].display();
    }

    return 0;
}
