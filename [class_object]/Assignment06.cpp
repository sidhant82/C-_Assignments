// Define a class named Room. Declare the data members  length, breadth, and height. Declare the member functions calculate_area() and calculate_volume (). calculate area and volume.

#include <iostream>

class Room {
private:
    float length;  // Length of the room
    float breadth; // Breadth of the room
    float height;  // Height of the room

public:
    // Constructor to initialize the dimensions
    Room(float l, float b, float h) : length(l), breadth(b), height(h) {}

    // Function to calculate the area of the room
    float calculate_area() {
        return length * breadth;
    }

    // Function to calculate the volume of the room
    float calculate_volume() {
        return length * breadth * height;
    }
};

int main() {
    float length, breadth, height;

    // Input dimensions of the room
    std::cout << "Enter the length of the room: ";
    std::cin >> length;
    std::cout << "Enter the breadth of the room: ";
    std::cin >> breadth;
    std::cout << "Enter the height of the room: ";
    std::cin >> height;

    // Create an object of Room
    Room myRoom(length, breadth, height);

    // Calculate and display area and volume
    std::cout << "Area of the room: " << myRoom.calculate_area() << std::endl;
    std::cout << "Volume of the room: " << myRoom.calculate_volume() << std::endl;

    return 0;
}
