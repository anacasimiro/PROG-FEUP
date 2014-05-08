#ifndef _DATE
#define _DATE

#include <iostream>
#include <string>

using namespace std;

class Date{
  unsigned weekDay;
  unsigned hour;
  unsigned minutes;
 public:
  Date(unsigned d, unsigned h, unsigned m);
  string show();
  int compare(Date otherDate);
  string getDay();
  int getHour();
  int getMinutes();
};

#endif
