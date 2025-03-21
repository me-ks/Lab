#include <iostream>
using namespace std;

class Segment {
private:
    double x1, y1, x2, y2;

public:
    // Constructors
    Segment() : x1(0), y1(0), x2(0), y2(0) {}
    Segment(double a, double b, double c, double d) : x1(a), y1(b), x2(c), y2(d) {}
    Segment(const Segment& s) : x1(s.x1), y1(s.y1), x2(s.x2), y2(s.y2) {}

    // Overloading the + operator
    Segment operator+(const Segment& s) const {
        return Segment(x1 + s.x1, y1 + s.y1, x2 + s.x2, y2 + s.y2);
    }

    // Overloading the - operator
    Segment operator-(const Segment& s) const {
        return Segment(x1 - s.x1, y1 - s.y1, x2 - s.x2, y2 - s.y2);
    }

    // Shift left by 1 unit along the OX axis
    void shiftLeft() {
        x1 -= 1;
        x2 -= 1;
    }

    // Display coordinates
    void display() const {
        cout << "Segment: (" << x1 << ", " << y1 << ") -> (" << x2 << ", " << y2 << ")" << endl;
    }
};

int main() {
    Segment W1(1, 2, 3, 4), W2(5, 6, 7, 8), W3(2, 2, 4, 4);

    W3.shiftLeft();
    Segment result = W1 + W2;

    cout << "W1: "; W1.display();
    cout << "W2: "; W2.display();
    cout << "Shifted W3: "; W3.display();
    cout << "Result (W1 + W2): "; result.display();

    return 0;
}
