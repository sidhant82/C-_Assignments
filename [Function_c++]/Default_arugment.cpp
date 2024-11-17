/*Define default arguments to function which adds 3 values.
Prototypes is – void add (int a=50,int b=30,int c=34);
Call the function with argument/without argument.
*/

#include <iostream>

// Function prototype with default arguments
void add(int a = 50, int b = 30, int c = 34) {
    int sum = a + b + c; // Calculate the sum
    std::cout << "Sum: " << sum << std::endl; // Print the sum
}

int main() {
    std::cout << "Calling add() without arguments:" << std::endl;
    add(); // Call the function without arguments (uses default values)

    std::cout << "Calling add() with two arguments:" << std::endl;
    add(10, 20); // Call the function with two arguments (uses default for c)

    std::cout << "Calling add() with all arguments:" << std::endl;
    add(5, 15, 25); // Call the function with all arguments

    return 0;
}
