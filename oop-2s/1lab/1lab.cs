using System;

class Square
{
    private double x1, y1, x2, y2, x3, y3, x4, y4;

    public Square(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
    {
        this.x1 = x1; this.y1 = y1;
        this.x2 = x2; this.y2 = y2;
        this.x3 = x3; this.y3 = y3;
        this.x4 = x4; this.y4 = y4;
    }

    private double SideLength()
    {
        return Math.Sqrt(Math.Pow(x2 - x1, 2) + Math.Pow(y2 - y1, 2));
    }

    public void DisplayCoordinates()
    {
        Console.WriteLine("Square coordinates:");
        Console.WriteLine($"({x1}, {y1}), ({x2}, {y2}), ({x3}, {y3}), ({x4}, {y4})");
    }

    public double Perimeter()
    {
        return 4 * SideLength();
    }

    public double Area()
    {
        return Math.Pow(SideLength(), 2);
    }

    public void DisplayResults()
    {
        Console.WriteLine($"Perimeter: {Perimeter()}");
        Console.WriteLine($"Area: {Area()}");
    }
}

class Program
{
    static void Main()
    {
        Square square = new Square(0, 0, 2, 0, 2, 2, 0, 2);
        square.DisplayCoordinates();
        square.DisplayResults();
    }
}
