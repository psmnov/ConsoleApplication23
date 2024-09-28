
class Shape
{
public:
	
	virtual void move(int x, int y)=0;
	virtual void scale(int coeff)=0;
	virtual void printShape()=0;
	virtual ~Shape() {};
};

