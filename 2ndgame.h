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

char A, B, C;
int e, g, p, o, lw;
int a, b, c, f, z, k, w;
std::vector<int> intPointers = { a,b,c };
HANDLE hProc = GetCurrentProcess();
uintptr_t base;
int basevalue;
int final = z + k + w;

uintptr_t GetMyValue(HANDLE hProc, uintptr_t ptr, std::vector<int> offsets)
{
	uintptr_t addr = ptr;

	for (int i = 0; i < offsets.size(); ++i)
	{
		ReadProcessMemory(hProc, (BYTE*)addr, &addr, sizeof(addr), 0);
		addr += offsets[i];

	}
	return addr;
}
uintptr_t finalbase = GetMyValue(hProc, base, intPointers);

void end() {
	cout << "Goodbye!" << endl;
}

void failed() {
	cout << "Press F12 to exit\n" << endl;

	for (int g = 0; g < 1000; ++g) {
		if (GetAsyncKeyState(VK_F12)) {
			end();
		}
		Sleep(100);
	}
}



void entrance() {
	cout << "You made it into the entrance!\n" << endl;
	
}

void boolcheck() {
	int local;
	int code = 123117;
	BOOL key = FALSE;
	cout << "What is the secret code?\n" << endl;
	cin >> local;
	
	if (local != code) {
		cout << "This is the wrong code!\n" << endl;
		cout << "Try again\n" << endl;
		boolcheck();
	}

	if (local == code) {
		key = TRUE;
	}
	
	if (key == TRUE) {
		entrance();
	}

}

void isfunction() {

	cout << "Set values for ints a,b,c\n" << endl;

	cout << "What value for a?\n" << endl;
	cin >> z;

	cout << "b?\n" << endl;
	cin >> k;

	cout << "c?\n" << endl;
	cin >> w;

	cout << "The vector will now hold the values: " << z << ", " << k << ", and " << w << "." << endl;


	uintptr_t completefinal = finalbase + z + k + w;
	cout << "In total the vector now holds: " << completefinal << endl;
	cout << "What do you want to change the whole value too? Number cant be a negative\n" << endl;

	cin >> f;

	for (int p = 0; p < 1; ++p) {
		if (f <= 0.0) {
			cout << "Invalid number\n" << endl;
			failed();
		}
		else
			break;
	}

	cout << "Changing values, " << completefinal << ". To the value of: " << f << endl;

	completefinal = f;
	uintptr_t lastcompletefinal;

	cout << "The value of the vector is now: " << completefinal << endl;
	cout << "Do you want to multiply the value? Or Write a new vector for comparison?\n" << endl;
	cout << "[1]To multiply [2]Write new vector\n" << endl;
	cin >> g;

	for (int w = 0; w < 1; ++w) {
		if (g > 2 | g < 0) {
			cout << "Invalid value\n" << endl;
			failed();
		}
		else
			break;
	}

	for (int kl = 0; kl < 1; ++kl) {
		if (g == 1) {
			cout << "What do you want to multiply the value by?\n" << endl;
			cin >> p;
			lastcompletefinal = completefinal * p;
			cout << "The value is now: " << lastcompletefinal << endl;
			break;
		}  

		if (g == 2) {
			cout << "What do you want to write the vector to now?\n" << endl;
			cin >> o;
			completefinal = o;
			cout << "The value is now: " << completefinal << endl;
			break;
		}
	}

	boolcheck();
}

void nextgame() {
	cout << "Welcome to the new game...\n"
		"In this game it will discuss BOOL function types and something im gonna do bla bla\n"
		"Enter a number from 1 - 15\n" << endl;
	cin >> e;
	for (int i = 0; i < 1; ++i) {
		if (e > 15 | e <= 0) {
			cout << "Invalid value" << endl;
			failed();
		}
		
		if (e <= 15) {
			cout << "You have chosen: " << e << endl;
			cout << "Now the next step is to see if the code is working\n" << endl;
			isfunction();
		}
	}
}
