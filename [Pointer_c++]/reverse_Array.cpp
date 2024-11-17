//Reverse the array using function. Pass array as a parameter to function.


#include <iostream>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards middle
        start++;
        end--;
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;

    int arr[size]; // Declare the array

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Original array: ";
    printArray(arr, size);

    reverseArray(arr, size); // Call the function to reverse the array

    std::cout << "Reversed array: ";
    printArray(arr, size); // Print the reversed array

    return 0;
}
