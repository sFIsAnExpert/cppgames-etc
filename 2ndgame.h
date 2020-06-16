#include <iostream>
#include <algorithm>
#include <vector>
#include <windows.h>
#include <time.h>
#include <stdio.h>
#include <malloc.h>
#include <minwindef.h>
#include <TlHelp32.h>
#include <mutex>
using namespace std;

void thirdentrance() {
	char i1[255], i2[255], i3[255];
	cout << "This is the third entrance, welcome user!\n" << endl;
	cout << "Speaking of user... What is your username?\n" << endl;
	cin >> i1;
	cout << "What is your password?\n" << endl;
	cin >> i2;

	cout << "So your username is: " << i1 << endl;
	cout << "And your password is: " << i2 << endl;
	cout << "Would you like to encrypt this? [Y][N]\n" << endl;
	
	cin >> i3;
}

void placekey() {
	char a[255], b[255] = "abcdef", c;
	cout << "Place the answer: \n" << endl;
	cin >> a;
	int value = strcmp(a, b);
	
	for (int j = 0; j < 1; ++j) {
		if (value == 0) {
			cout << "You got the correct password!\n" << endl;
			thirdentrance();
		}
		else
			placekey();
	}
}

void encrypt() {
	char val1 = '1', val2 = '2', val3 = '3', val4 = '4', val5 = '5', val6 = '6';
	char i1, i2, i3, i4, i5, i6;
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

	
		char s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
		if (i1 == val1 | i1 == val2 | i1 == val3 | i1 == val4 | i1 == val5 | i1 == val6) {
			cout << "fkq2fkqf\n";
		}
		
		if (i2 == val1 | i2 == val2 | i2 == val3 | i2 == val4 | i2 == val5 | i2 == val6) {
			cout << "kSjeuVur\n";
		}
		
		if (i3 == val1 | i3 == val2 | i3 == val3 | i3 == val4 | i3 == val5 | i3 == val6) {
			cout << "KeFjkaOd3\n";
		}
		
		if (i4 == val1 | i4 == val2 | i4 == val3 | i4 == val4 | i4 == val5 | i4 == val6) {
			cout << "HdfzEwsfj\n";
		}
	
		if (i5 == val1 | i5 == val2 | i5 == val3 | i5 == val4 | i5 == val5 | i5 == val6) {
			cout << "KsiUehfkS\n";
		}
	
		if (i6 == val1 | i6 == val2 | i6 == val3 | i6 == val4 | i6 == val5 | i6 == val6) {
			cout << "HfuWi2iq9\n";
		}
		cout << "This is your main code, decode the string\n" << endl;
		
		placekey();
}
