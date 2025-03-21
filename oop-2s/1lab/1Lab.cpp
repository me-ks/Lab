#include <iostream>
#include <cmath>

class Square {
private:
    double x1, y1, x2, y2, x3, y3, x4, y4;

    double sideLength() const {
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }

public:
    Square(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
        : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3), x4(x4), y4(y4) {}

    void displayCoordinates() const {
        std::cout << "Square coordinates:\n";
        std::cout << "(" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << "), ";
        std::cout << "(" << x3 << ", " << y3 << "), (" << x4 << ", " << y4 << ")\n";
    }

    double perimeter() const {
        return 4 * sideLength();
    }

    double area() const {
        return pow(sideLength(), 2);
    }

    void displayResults() const {
        std::cout << "Perimeter: " << perimeter() << "\n";
        std::cout << "Area: " << area() << "\n";
    }
};

int main() {
    Square square(0, 0, 2, 0, 2, 2, 0, 2);
    square.displayCoordinates();
    square.displayResults();

    return 0;
}
