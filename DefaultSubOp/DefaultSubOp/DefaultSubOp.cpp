// DefaultSubOp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::endl;
using std::cout;
using std::ostream;

class Point
{
private:
	int x, y;

public:
	Point(const int& x_in, const int& y_in)
		: x(x_in), y(y_in)
	{}
	friend std::ostream& operator<<(std::ostream& out, const Point& p)
	{
		out << "[" << p.x << ", " << p.y << "]" << endl;
		return out;
	}
};

int main()
{
	Point p1(1, 3);
	Point p2(10, 30);
	cout << p1 << endl;
	cout << p2 << endl;

	p1 = p2;
	cout << p1 << endl;

	return 0;
}

