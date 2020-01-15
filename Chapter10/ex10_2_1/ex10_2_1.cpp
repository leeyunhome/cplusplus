// ex10_2_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::istream;
using std::ostream;

class Point
{
private:
	int x, y;

public:
	Point(const int& x_in = 0, const int& y_in = 0)
		: x(x_in), y(y_in)
	{}
	
	friend std::istream& operator>>(std::istream& in, Point& p)
	{
		in >> p.x >> p.y;
		return in;
	}
	friend std::ostream& operator<<(std::ostream& out, const Point& p)
	{
		out << "[" << p.x << ", " << p.y << "]" << endl;
		return out;
	}
};

int main()
{
	Point p;
	cout << p;

	cout << "enter x, y :";
	cin >> p;
	cout << p;

	return 0;
}

