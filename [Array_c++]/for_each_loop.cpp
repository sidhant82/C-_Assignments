//Define character array of 10, print array elements using for each loop.


#include <iostream>

using namespace std;

int main() {
    char array[10]; // Declare a character array of size 10

    // Input elements into the array
    cout << "Enter 10 characters:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element [" << i << "]: ";
        cin >> array[i]; // Input character
    }

    // Print array elements using a range-based for loop
    cout << "Array elements are:" << endl;
    for (char element : array) {
        cout << element << " "; // Print each element
    }
    cout << endl; // New line for better output formatting

    return 0;
}
