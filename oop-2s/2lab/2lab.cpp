#include <iostream>
using namespace std;

class Square {
private:
    double side;
public:
    // Constructors
    Square() : side(1.0) {} // Default constructor
    Square(double s) : side(s) {} // Parameterized constructor

    // Destructor
    ~Square() {}

    // Methods
    double getArea() const { return side * side; }
    double getPerimeter() const { return 4 * side; }
    void display() const {
        cout << "Side: " << side << ", Area: " << getArea() << ", Perimeter: " << getPerimeter() << endl;
    }
};

int main() {
    Square sq1;
    Square sq2(5.0);

    cout << "Default square: ";
    sq1.display();

    cout << "Square with side 5.0: ";
    sq2.display();

    return 0;
}
