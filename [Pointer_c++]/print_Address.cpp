//Print the address of the variables defined.

#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    // Constructor to initialize the radius
    Circle(double r) : radius(r) {}

    // Member function to calculate area
    double area() const {
        return M_PI * radius * radius; // M_PI is a constant for π
    }

    // Member function to calculate circumference
    double circumference() const {
        return 2 * M_PI * radius;
    }

    // Function to print the address of the radius variable
    void printAddresses() const {
        std::cout << "Address of radius: " << &radius << std::endl;
    }

    // Setter for radius
    void setRadius(double r) {
        if (r >= 0) {
            radius = r;
        } else {
            std::cout << "Radius cannot be negative." << std::endl;
        }
    }

    // Getter for radius
    double getRadius() const {
        return radius;
    }
};

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    Circle circle(radius);

    std::cout << "Area of the circle: " << circle.area() << std::endl;
    std::cout << "Circumference of the circle: " << circle.circumference() << std::endl;
    
    // Print the address of the radius variable
    circle.printAddresses();

    return 0;
}
