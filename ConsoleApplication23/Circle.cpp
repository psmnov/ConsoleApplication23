#include "Shape.h"
#include "Point.h"
#include "Circle.h"
#include <iostream>
void Circle::move(int xMove, int yMove) {
	center.x += xMove;
	center.y += yMove;
}
void Circle::scale(int coeff) {
	radius *= coeff;
}
void Circle::printShape() {
	cout << "Center: " << center.toString() << "\nRadius: " << radius << "\n";
}