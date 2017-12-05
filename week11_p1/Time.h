#ifndef TIME_H
#define TIME_H

class Time 
{
private:	
	int hour;
	int minute;
	int second;

public: 
	Time();								// Default Constructor. 
	Time(int h, int m, int s);			// Time value with all three values. 
	Time(int h, int m);					// Time value with only hours and minutes. 
	void setHour(int h);				// Changes hours independantly. 
	void setMinute(int m);				// Changes minutes independantly.
	void setSecond(int s);				// Changes seconds independantly.
	int getHour();						// Gets the hour.
	int getMinute();					// Gets the minute.
	int getSecond();					// Gets the minute. 
	void printStandard();				// Prints the time in standard US format. 
	void printMilitary();				// Prints the time in US military, internantional standard, format.
};

#endif