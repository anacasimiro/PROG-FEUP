#include "Interface.h"

using namespace std;

Interface::Interface()
{
}


Interface::~Interface()
{
}

void Interface::clearStdInAndPressEnterToContinue() {
	cin.clear();
	cin.ignore(10000, '\n');
	cout << "Press <Enter> to continue...";
	cin.get();
}

void Interface::start()
{
	bool done;

	do {
		done = false;

		system("cls");

		cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
		cout << "X                                                          X" << endl;
		cout << "X                          THE BOX                         X" << endl;
		cout << "X                                                          X" << endl;
		cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl << endl;
		cout << "Welcome to The Box!" << endl;
		cout << "To start, choose an option from the menu: " << endl << endl;
		cout << "1. cenas" << endl;
		cout << "1. cenas" << endl;
		cout << "1. cenas" << endl;
		cout << "2. Quit" << endl;

		int input;
		cout << endl;
		cout << "Choose an option: ";
		cin >> input;
		if (1 <= input && input <= 2) {
			switch (input)
			{
			case 1:
				break;
			case 2:
				done = true;
				break;
			default:
				break;
			}
		}
		else
			clearStdInAndPressEnterToContinue();
	} while (!done);
	
	cout << "Program terminated." << endl;
}
