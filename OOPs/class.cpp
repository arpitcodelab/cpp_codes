#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Default constructor (length = 1, breadth = 1)
    Rectangle() {
        length = 1;
        breadth = 1;
    }

    // Parameterized constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Setter for length
    void setLength(int l) {
        if (l > 0) // simple validation
            length = l;
        else
            cout << "Length must be positive!\n";
    }

    // Getter for length
    int getLength() {
        return length;
    }

    // Function to calculate area
    int area() {
        return length * breadth;
    }

    // Function to calculate perimeter
    int perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    // Using default constructor
    Rectangle r1;
    cout << "Default Rectangle: \n";
    cout << "Length: " << r1.getLength() << "\n";
    cout << "Area: " << r1.area() << "\n";
    cout << "Perimeter: " << r1.perimeter() << "\n\n";

    // Using parameterized constructor
    Rectangle r2(10, 5);
    cout << "Parameterized Rectangle: \n";
    cout << "Length: " << r2.getLength() << "\n";
    cout << "Area: " << r2.area() << "\n";
    cout << "Perimeter: " << r2.perimeter() << "\n\n";

    // Modifying length of r2
    r2.setLength(20);
    cout << "After modifying length of r2: \n";
    cout << "Length: " << r2.getLength() << "\n";
    cout << "Area: " << r2.area() << "\n";
    cout << "Perimeter: " << r2.perimeter() << "\n";

    return 0;
}

