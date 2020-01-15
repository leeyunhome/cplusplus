// HelloWorldReview2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

namespace mystd
{
	const char* endl = "\n";
	class ostream
	{
	public:
		ostream& operator<<(const char* str) 
		{
			printf("%s", str);
			return *this;
		}
		ostream& operator<<(int i)
		{
			printf("%d", i);
			return *this;
		}
		ostream& operator<<(double i)
		{
			printf("%e", i);
			return *this;
		}
	};
	ostream cout;
}

using mystd::cout;
using mystd::endl;

int main()
{
	cout << "Hello World" << endl << 3.14 << endl;

	return 0;
}
