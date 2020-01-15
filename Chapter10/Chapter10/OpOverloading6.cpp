// Chapter10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Point
{
private:
	int x, y;

public:
	Point(const int& _x, const int& _y)
		: x(_x), y(_y)
	{}
	void ShowPosition()
	{}
	friend std::ostream& operator<<(std::ostream& out, const Point& p)
	{
		out << "[" << p.x << ", " << p.y << "]";
		return out;
	}
};
int main()
{
	using namespace std;

	Point p1(1, 2);

	cout << p1 << endl;
	return 0;
}

