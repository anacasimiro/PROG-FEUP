#include <iostream>
#include <cstdlib>

#include "Date.h"
#include "Box.h"

// Randomly generates a valid day, hour and minute
Date currentDate(){
  // to be implemented by the students

	Date currentDate (6, 11, 05);

	return currentDate;

}


using namespace std;

int main(){
	
	Date today = currentDate();

	cout << today.show() << endl;

  exit(0);
}
