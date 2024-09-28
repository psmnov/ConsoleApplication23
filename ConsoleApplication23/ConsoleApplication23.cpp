#include <iostream>
#include "Point.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
int main()
{
    Point p = Point(1, 4);
    Rectangle r = Rectangle(Point(2,5), 3, 2);
    Square s = Square(Point(1, 1), 3);
    Circle c = Circle(Point(1, 4), 4);
    s.printShape();
    r.printShape();
    c.printShape();
    std::cout <<p.toString() << "\n";
    std::cout << "Hello World!\n";
}

