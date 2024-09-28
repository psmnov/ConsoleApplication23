#include <string>
//#include <iostream>
using namespace std;
class Point
{
public:
	int x;
	int y;
	Point(int valueX, int valueY) : x(valueX), y(valueY) {};
	string toString();
};

