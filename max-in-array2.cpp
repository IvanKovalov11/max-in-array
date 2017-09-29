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
	int max = -2147483647;

	if (read_numbers(a) && read_numbers(b)) {
		for (int i = 0; i < 10; ++i) {
			for (int j = 0; j < 10; ++j){
				if (i <= j) {
					if (a[i] + b[j] > max)
						max = a[i] + b[j];
							}
						}
			 
					}
		cout << "max=" << max;
				}
	else {
		cout << "An error has occurred while reading numbers";
	}
	system("pause");
}
