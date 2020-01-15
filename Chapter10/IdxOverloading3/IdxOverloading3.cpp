// IdxOverloading3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	Point(int _x = 0, int _y = 0)
		: x(_x), y(_y)
	{}
	friend std::ostream& operator<<(std::ostream& out, const Point& p)
	{
		out << "[" << p.x << ", " << p.y << "]" << endl;
		return out;
	}
};

// PointArr class
const int SIZE = 5;

class PointArr
{
private:
	Point arr[SIZE];
	int idx;

public:
	PointArr()
		: idx(0)
	{}
	void AddElem(const Point& elem);
	void ShowAllData();
	Point& operator[](int i);
};

void PointArr::AddElem(const Point& elem)
{
	if (idx >= SIZE)
	{
		cout << "capacity exceed!" << endl;
		return;
	}
	arr[idx++] = elem;
}

void PointArr::ShowAllData()
{
	for (int i = 0; i < idx; i++)
		cout << "arr[" << i << "]=" << arr[i] << endl;
}

Point& PointArr::operator[](int i)
{
	return arr[i];
}

int main()
{
	PointArr arr;

	arr.AddElem(Point(1, 1));
	arr.AddElem(Point(2, 2));
	arr.AddElem(Point(3, 3));
	arr.ShowAllData();

	// access and change individual elements
	arr[0] = Point(10, 10);
	arr[1] = Point(20, 20);
	arr[2] = Point(30, 30);

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;

	return 0;
}

