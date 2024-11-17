//Write a C++ program to count even and odd numbers of array.

#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size]; // Declare the array

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; // Input array elements
    }

    int evenCount = 0; // Initialize even count
    int oddCount = 0;  // Initialize odd count

    // Count even and odd numbers
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++; // Increment even count
        } else {
            oddCount++; // Increment odd count
        }
    }

    // Display the results
    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;

    return 0;
}
