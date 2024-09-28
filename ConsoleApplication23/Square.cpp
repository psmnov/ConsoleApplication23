#include "Point.h"
#include "Shape.h"
#include "Square.h"
#include <iostream>
void Square::move(int xMove, int yMove) {
	leftBottomPoint.x += xMove;
	leftBottomPoint.y += yMove;
}
void Square::scale(int coeff) {
	sideLength *= coeff;
}
void Square::printShape() {
	cout << "Left bottom point: " << leftBottomPoint.toString() << "\nSide length: " << sideLength << "\n";
}