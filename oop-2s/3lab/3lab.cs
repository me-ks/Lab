using System;

class Segment
{
    private double x1, y1, x2, y2;

    // Constructors
    public Segment()
    {
        x1 = y1 = x2 = y2 = 0;
    }

    public Segment(double a, double b, double c, double d)
    {
        x1 = a;
        y1 = b;
        x2 = c;
        y2 = d;
    }

    public Segment(Segment s)
    {
        x1 = s.x1;
        y1 = s.y1;
        x2 = s.x2;
        y2 = s.y2;
    }

    // Overloading the + operator
    public static Segment operator +(Segment s1, Segment s2)
    {
        return new Segment(s1.x1 + s2.x1, s1.y1 + s2.y1, s1.x2 + s2.x2, s1.y2 + s2.y2);
    }

    // Overloading the - operator
    public static Segment operator -(Segment s1, Segment s2)
    {
        return new Segment(s1.x1 - s2.x1, s1.y1 - s2.y1, s1.x2 - s2.x2, s1.y2 - s2.y2);
    }

    // Shift left by 3 units along the OX axis
    public void ShiftLeft()
    {
        x1 -= 3;
        x2 -= 3;
    }

    // Display segment coordinates
    public void Display()
    {
        Console.WriteLine($"Segment: ({x1}, {y1}) -> ({x2}, {y2})");
    }
}

class Program
{
    static void Main()
    {
        Segment W1 = new Segment(1, 2, 3, 4);
        Segment W2 = new Segment(5, 6, 7, 8);
        Segment W3 = new Segment(2, 2, 4, 4);

        W3.ShiftLeft();
        Segment result = W1 + W2;

        Console.WriteLine("W1: "); W1.Display();
        Console.WriteLine("W2: "); W2.Display();
        Console.WriteLine("Shifted W3: "); W3.Display();
        Console.WriteLine("Result (W1 + W2): "); result.Display();
    }
}
