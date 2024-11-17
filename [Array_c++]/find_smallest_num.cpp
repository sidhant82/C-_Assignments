//Declare 2D array of size 3X3. Find smallest element of array.

#include <iostream>

using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;
    int array[rows][cols]; // Declare a 2D array
    int smallest;

    // Input elements into the 2D array
    cout << "Enter 9 elements for a 3x3 array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> array[i][j]; // Input element
        }
    }

    // Initialize smallest with the first element
    smallest = array[0][0];

    // Find the smallest element
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] < smallest) {
                smallest = array[i][j]; // Update smallest if a smaller element is found
            }
        }
    }

    // Display the smallest element
    cout << "The smallest element in the array is: " << smallest << endl;

    return 0;
}
