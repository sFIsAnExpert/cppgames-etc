#include <iostream>
#include <algorithm>
#include <vector>
#include <windows.h>
#include <time.h>
#include <stdio.h>
#include <minwindef.h>
#include <TlHelp32.h>
#include <mutex>
using namespace std;

char val1 = 1, val2 = 2, val3 = 3, val4 = 4, val5 = 5, val6 = 6;

void encrypt() {
	char i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0, i6 = 0;
	cout << "Enter placement slot 1\n" << endl;
	cin >> i1;
	cout << "#2\n" << endl;
	cin >> i2;
	cout << "#3\n" << endl;
	cin >> i3;
	cout << "#4\n" << endl;
	cin >> i4;
	cout << "#5\n" << endl;
	cin >> i5;
	cout << "#6\n" << endl;
	cin >> i6;
	cout << "Calculating Result...\n" << endl;

	for (int i = 0; i < 1000; ++i) {
		char s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
		if (i1 == val1 | i1 == val2 | i1 == val3 | i1 == val4 | i1 == val5 | i1 == val6) {
			i1 == 'a';
			s1 == i1;
		}
		else
			continue;
		if (i2 == val1 | i2 == val2 | i2 == val3 | i2 == val4 | i2 == val5 | i2 == val6) {
			i2 == 'b';
			s2 == i2;
		}
		else
			continue;
		if (i3 == val1 | i3 == val2 | i3 == val3 | i3 == val4 | i3 == val5 | i3 == val6) {
			i3 == 'c';
			s3 == i3;
		}
		else
			continue;
		if (i4 == val1 | i4 == val2 | i4 == val3 | i4 == val4 | i4 == val5 | i4 == val6) {
			i4 == 'd';
			s4 == i4;
		}
		else
			continue;
		if (i5 == val1 | i5 == val2 | i5 == val3 | i5 == val4 | i5 == val5 | i5 == val6) {
			i5 == 'e';
			s5 == i5;
		}
		else
			continue;
		if (i6 == val1 | i6 == val2 | i6 == val3 | i6 == val4 | i6 == val5 | i6 == val6) {
			i6 == 'f';
			s6 == i6;
		}
		else 
			continue;
		cout << "Your string is: " << s1 << s2 << s3 << s4 << s5 << s6 << endl;
		break;
	}
	
}
