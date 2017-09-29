#include "stdafx.h"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	for (string string; getline(cin, string); ) {
		int nmb[10];
		istringstream stream(string);
		bool failure = false;
		for (int i = 0; i < 10; ++i) {
			if (!(stream >> nmb[i])) {
				failure = true;
				break;
			}
		}

		int max = -2147483647;

		if (!failure) {
			for (int i = 0; i < 10; ++i) {
				if (nmb[i] > max) {
					max = nmb[i];
				}				
			}
			cout << max << endl;
		}
		else {
			cout << "An error has occured while reading numbers from line" << std::endl;
		}
	}
}
