// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
using namespace std;

bool read_numbers(int array[10])
{
	string string;
	getline(cin, string);
	istringstream stream(string);
	bool success = true;
	for (int i = 0; i < 10; ++i) {
		if (!(stream >> array[i])) {
			success = false;
			break;
		}
	}

	return success;
}

int main()
{
	int a[10];
	int b[10];
	int max1 = -2147483647;
	int max2 = -2147483647;
	int maxsum = -2147483647;

	if (read_numbers(a) && read_numbers(b))
	{
		{
		for (int i = 0; i < 10; ++i)
		{
			if (a[i] > max1)
			{
				max1 = a[i];
			}
		}
		for (int j = 0; j < 10; ++j)
		{
			if (b[j] > max2)
			{
				max2 = b[j];
			}
		}
		maxsum = max1 + max2;
	}
	cout << "maxsum=" << maxsum;
}
	else 
	{
		cout << "An error has occurred while reading numbers";
	}
	system("pause");
}

