// DefaultSubProb2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

class Person
{
private:
	char* name;

public:
	Person(const char* name_in)
	{
		name = new char[strlen(name_in) + 1];
		strcpy(name, name_in);
	}
	Person(const Person& p)
	{
		name = new char[strlen(p.name) + 1];
		strcpy(name, p.name);
	}
	~Person()
	{
		delete[] name;
	}
	friend std::ostream& operator<<(std::ostream& out, const Person& p)
	{
		out << p.name;
		return out;
	}
	Person& operator=(const Person& p)
	{
		delete[] name;
		name = new char[strlen(p.name) + 1];
		strcpy(name, p.name);
		return *this;
	}
};

int main()
{
	Person p1("LEE HYERIM");
	Person p2("HONG KEN");

	cout << p1 << endl;
	cout << p2 << endl;

	p1 = p2;

	cout << p1 << endl;

	return 0;
}

