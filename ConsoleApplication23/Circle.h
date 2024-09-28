class Point;
class Circle : Shape
{
public:
	Point center;
	int radius;

	void move(int x, int y) override;
	void scale(int coeff) override;
	void printShape() override;

	Circle(Point centerP, int r) : center(centerP), radius(r) {};
};

