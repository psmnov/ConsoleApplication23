#include "Point.h"
//#include <string>
#include <iostream>
using namespace std;
string Point::toString() {
	string strX = to_string(x);
	string strY = to_string(y);
	return "(" + strX + ", " + strY + ")";
}