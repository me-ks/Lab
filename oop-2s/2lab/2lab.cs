using System;

class Square {
    private double side;

    // Constructors
    public Square() { side = 1.0; } // Default constructor
    public Square(double s) { side = s; } // Parameterized constructor

    // Method to calculate area
    public double GetArea() { return side * side; }

    // Method to calculate perimeter
    public double GetPerimeter() { return 4 * side; }

    // Display information
    public void Display() {
        Console.WriteLine($"Side: {side}, Area: {GetArea()}, Perimeter: {GetPerimeter()}");
    }
}

class Program {
    static void Main() {
        Square sq1 = new Square();
        Square sq2 = new Square(5.0);

        Console.WriteLine("Default square:");
        sq1.Display();

        Console.WriteLine("Square with side 5.0:");
        sq2.Display();
    }
}
