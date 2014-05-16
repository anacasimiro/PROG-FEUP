#include <iostream>
#include <cstdlib>

#include "Interface.h"
#include "Date.h"
#include "Box.h"

using namespace std;

// Randomly generates a valid day, hour and minute
Date currentDate() {
	// to be implemented by the students

	Date currentDate(6, 11, 05);

	return currentDate;

}

int main() {
	Date today = currentDate();

	cout << today.show() << endl;

	Interface interface;
	interface.start();

	return 0;
}
