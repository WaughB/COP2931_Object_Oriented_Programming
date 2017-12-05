#include <iostream>
#include <iomanip>
#include "Time.h"

using namespace std;

Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}
/* Time with three variables. */
Time::Time(int h, int m, int s)
{
	// Hours.
	if (h >= 0 && h <= 23)
	{
		hour = h;
	}
	else
	{
		hour = 0;
	}

	// Minutes. 
	if (m >= 0 && m <= 59)
	{
		minute = m;
	}
	else
	{
		minute = 0;
	}

	// Seconds. 
	if (s >= 0 && s <= 59)
	{
		second = s;
	}
	else
	{
		second = 0;
	}
}

/* Time with two variable. */
Time::Time(int h, int m)
{
	// Hours.
	if (h >= 0 && h <= 23)
	{
		hour = h;
	}
	else
	{
		hour = 0;
	}

	// Minutes. 
	if (m >= 0 && m <= 59)
	{
		minute = m;
	}
	else
	{
		minute = 0;
	}
}

/* Sets the hour. */
void Time::setHour(int h)
{
	// Hours.
	if (h >= 0 && h <= 23)
	{
		hour = h;
	}
}

/* Sets the minutes. */
void Time::setMinute(int m)
{
	// Minutes. 
	if (m >= 0 && m <= 59)
	{
		minute = m;
	}
}

/* Sets the seconds. */
void Time::setSecond(int s)
{
	// Seconds. 
	if (s >= 0 && s <= 59)
	{
		second = s;
	}
}

/* Gets the hour. */
int Time::getHour()
{
	return hour;
}

/* Gets the minute. */
int Time::getMinute()
{
	return minute;
}

/* Gets the second. */
int Time::getSecond()
{
	return second;
}

/* Prints the time in standard US format. */
void Time::printStandard()
{
	if (hour > 0 && minute > 0 && second > 0)
	{
		cout << (hour > 12? (hour - 12) : hour) << ":" 
		<< (minute < 10? "0" : "") << minute << ":" 
		<< (second < 10? "0" : "") << second 
		<< (hour < 12 ? " am" : " pm") << endl;
	}
	else
	{
		cout << (hour > 12 ? (hour - 12) : hour) << ":"
		<< (minute < 10 ? "0" : "") << minute
		<< (hour < 12 ? " am" : " pm") << endl;
	}
}

/* Prints the time in US military format. */
void Time::printMilitary()
{
	cout << (hour < 10? "0" : "") << hour 
		 << (minute < 10 ? "0" : "") << minute <<  endl;
}