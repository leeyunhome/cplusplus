// IdxOverloading1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::endl;
using std::cout;

const int SIZE = 3;

class myArray
{
private:
	int arr[SIZE];
	int idx;

public:
	myArray()
		: idx(0)
	{}
	int GetElem(int i);
	void SetElem(int i, int elem);
	void AddElem(int elem);
	void ShowAllData();

	int operator[](int i)
	{
		return arr[i];
	}
};
int myArray::GetElem(int i)
{
	return arr[i];
}

void myArray::SetElem(int i, int elem)
{
	if (idx <= i)
	{
		cout << "absent element!" << endl;
		return;
	}
	arr[i] = elem;
}

void myArray::AddElem(int elem)
{
	if (idx >= SIZE)
	{
		cout << "capacity exceed!" << endl;
		return;
	}
	arr[idx++] = elem;
}

void  myArray::ShowAllData()
{
	for (int i = 0; i < idx; ++i)
	{
		cout << "arr[" << i << " ]= " << arr[i] << endl;
	}
}

int main()
{
	myArray arr;
	arr.AddElem(1);
	arr.AddElem(2);
	arr.AddElem(3);
	arr.ShowAllData();

	arr.SetElem(0, 10);
	arr.SetElem(1, 20);
	arr.SetElem(2, 30);

	/*cout << arr.GetElem(0) << endl;
	cout << arr.GetElem(1) << endl;
	cout << arr.GetElem(2) << endl;*/
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;

	return 0;
}

