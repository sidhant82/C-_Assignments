//Define integer array of 10. Print array elements using for each loop.


#include <iostream>

using namespace std;

int main() {
    int array[10]; // Declare an integer array of size 10

    // Input elements into the array
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element [" << i << "]: ";
        cin >> array[i]; // Input element
    }

    // Print array elements using a range-based for loop
    cout << "Array elements are:" << endl;
    for (int element : array) {
        cout << element << " "; // Print each element
    }
    cout << endl; // New line for better output formatting

    return 0;
}
