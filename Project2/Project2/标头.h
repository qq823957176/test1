#pragma once
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int &newYear,int &newMonth,int &newDay);
	int getYear();
	void setYear(int newYear);
};
