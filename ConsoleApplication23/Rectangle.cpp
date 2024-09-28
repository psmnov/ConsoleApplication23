#include "Point.h"
#include "Rectangle.h"
#include <iostream>
void Rectangle::move(int xMove, int yMove) {
	leftBottomPoint.x += xMove;
	leftBottomPoint.y += yMove;
}
void Rectangle::scale(int coeff) {
	width *= coeff;
	height *= coeff;
}
void Rectangle::printShape() {
	cout << "Left bottom point: " << leftBottomPoint.toString() << "\nWidth: " << width << "\nHeight: " << height<<"\n";
}
