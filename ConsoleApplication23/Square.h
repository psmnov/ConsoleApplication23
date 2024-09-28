//#include "Shape.h"
class Point;
class Square: public Shape
{
public:
	Point leftBottomPoint;
	int sideLength;

	void move(int x, int y) override;
	void scale(int coeff) override;
	void printShape() override;

	Square(Point pValue, int sideLengthValue) : 
		leftBottomPoint(pValue),
		sideLength(sideLengthValue) 
	{};
};

