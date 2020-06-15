#include "2ndgame.h"
#define ll long long
using namespace std;
char M, L, K;
int h, i, j = 0;


void puzzle() {
	cout << "Welcome to the puzzle\n"
		"Here is your grid: \n"
		"_____________________________________\n"
		"|                 |                 |\n"
		"|        1        |        2        |\n"
		"|				   |				 |\n"
		"|_________________|_________________|\n"
		"|                 |                 |\n"
		"|                 |                 |\n"
		"|        4        |        3        |\n"
		"|                 |                 |\n"
		"|_________________|_________________|\n"
		"|                 |                 |\n"
		"|                 |                 |\n"
		"|        5        |        6        |\n"
		"|                 |                 |\n"
		"|                 |                 |\n"
		"|_________________|_________________|\n" << endl;
	

	unsigned long l;
	srand((unsigned)time(NULL));

	for (l = 0; l < 100500; ++l)
	{
		i = j = rand() % 6 + 1;
	}
	


	
	cout << "What is your answer?\n" << endl;
	cin >> h;


		for (int j = 0; j < 100; ++j) {
			if (h > 6 |  h <= 0) {
				cout << "That value is not allowed...\n" << endl;
				break;
			}
			
			if (h == i)
			{
				cout << "You have successfully guessed board #: " << i << endl;
			}
			else
				cout << "You did not guess correctly...\n" << "The answer was: " << i << endl;
			break;
		}
		cout << "Please click F12 to do the next game\n" << endl;
		for (int n = 0; n < 1000; ++n) {
			
			if (GetAsyncKeyState(VK_F12))
			{
				nextgame();
			}
			Sleep(100);
		}
}
int main() {
	
	cout << "Welcome to the guessing game\n"
		"There will be 6 squares on the board\n"
		"Guess the correct board and win a prize\n" << endl;

	cout << "Do you want to play?\n" << "[Y][N]\n" << endl;
	
	cin >> M;
	for (int i = 0; i < 1; ++i) {
		if (M == 'Y' | M == 'y') {
			puzzle();
			continue;
		}
		else
			cout << "Not an option\n" << endl;

		if (M == 'N' | M == 'n') {
			cout << "Exiting process\n" << endl;
			return 0;
		}
		else
			cout << "Not an option\n" << endl;

		if (M == 'B' | M == 'b') {
			newentrance();
		}
		else
			cout << "Not an option\n" << endl;
	}
	
}
