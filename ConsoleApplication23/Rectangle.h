#include "Shape.h"
class Point;
class Rectangle: public Shape
{
public:
	Point leftBottomPoint;
	int width;
	int height;

	void move(int x, int y) override;
	void scale(int coeff) override;
	void printShape() override;

	Rectangle(Point valueLeftBotttomPoint, int valueWidth, int valueHeight) : 
		leftBottomPoint(valueLeftBotttomPoint), 
		width(valueWidth),
		height(valueHeight)
	{};

};

