#include "Date.h"
#include <string>

using namespace std;

Date::Date(unsigned d, unsigned h, unsigned m) {

	weekDay = d;
	hour = h;
	minutes = m;

}

string Date::show() {	

	string day;
	string date;

	switch (weekDay) {
		case 1:
			day = "Sunday";
			break;
		case 2:
			day = "Monday";
			break;
		case 3:
			day = "Tuesday";
			break;
		case 4:
			day = "Wednesday";
			break;
		case 5:
			day = "Thursday";
			break;
		case 6:
			day = "Friday";
			break;
		case 7:
			day = "Saturday";
			break;
	}
	
	date = day + ", " + to_string(hour) + ":" + to_string(minutes);
	
	if (to_string(hour).length() == 1)
		date = day + ", 0" + to_string(hour) + ":" + to_string(minutes);
	if (to_string(minutes).length() == 1)
		date = day + ", " + to_string(hour) + ":0" + to_string(minutes);

	return date;
}

int Date::compare(Date otherDate){
	// 1 se se comparou a data dada com uma data mais antiga
	// 2 se se comparou a data dada com uma data mais recente
	// 3 mesma data

	if (weekDay > otherDate.weekDay){
		return 1;
	}
	if (weekDay < otherDate.weekDay){
		return 2;
	}
	if (weekDay == otherDate.weekDay){
		if (hour > otherDate.hour){
			return 1;
		}
		if (hour < otherDate.hour){
			return 2;
		}
		if (hour == otherDate.hour){
			if (minutes > otherDate.minutes){
				return 1;
			}
			if (minutes < otherDate.minutes){
				return 2;
			}
			if (minutes == otherDate.minutes){
				return 3;
			}
		}
	}

}

string Date::getDay(){
	switch (weekDay) {
	case 1:
		return "Sunday";
		break;
	case 2:
		return "Monday";
		break;
	case 3:
		return "Tuesday";
		break;
	case 4:
		return "Wednesday";
		break;
	case 5:
		return "Thursday";
		break;
	case 6:
		return "Friday";
		break;
	case 7:
		return "Saturday";
		break;
	}
}