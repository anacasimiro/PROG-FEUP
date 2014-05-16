#ifndef _INTERFACE
#define _INTERFACE

#include <iostream>
using namespace std;

class Interface
{
public:
	Interface();
	~Interface();

	void clearStdInAndPressEnterToContinue();
	void start();
};

#endif