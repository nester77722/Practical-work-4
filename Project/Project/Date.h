#pragma once

#include <iostream>
#include <string>

class Date
{

private:    // ������������ �������

	int day;
	
	int month;

	int year;

public:

	Date();

	Date(int, int, int);

	void Print();

	void GetDate(int& day, int& month, int& year);
};

