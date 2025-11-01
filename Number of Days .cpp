#include <iostream>
#include <iomanip>
using namespace std;

// function to check whether the year is leap year
bool isLeapYear(int year) {
	return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

// function to get the number of days in a month
int daysInMonth(int month, int year) {
	switch (month) {
	case 1: case 3: case 5: case 6: case 8: case 10: case 12:
		return 31;
	case 4: case 7: case 9: case 11:
		return 30;
	case 2:
		return isLeapYear(year) ? 29 : 28;
	}
}

// function to calculate number of days from 1 Jan to a specific date
int daysFromStartOfYear(int day, int month, int year) {
	int days = day; // start with the days in start/endMonth
	for (int m = 1; m < month; ++m) { // loop through all the months before start/endMonth
		days += daysInMonth(m, year); // add number of days in each those months
	}
	return days;
}

// function to calculate the number of days between two dates
int NoOfDays(int startMonth, int endMonth, int startYear, int endYear, int checkInDay, int checkOutDay) {
	int numberOfDays;

	if (startYear == endYear) {
		// same year calculation
		// days from 1 Jan to check-out date - days from 1 Jan to check-in date + 1 to include both checkin & checkout days
		numberOfDays = daysFromStartOfYear(checkOutDay, endMonth, endYear) - daysFromStartOfYear(checkInDay, startMonth, startYear) + 1;
	}
	else {
		// diff year calculation
		// get total number of days in startYear(2024/2025) - days from 1 Jan to check-in date + 1 to include check-in day + days from 1 Jan to check-out date
		numberOfDays = (daysFromStartOfYear(daysInMonth(startMonth, startYear), 12, startYear) - daysFromStartOfYear(checkInDay, startMonth, startYear) + 1) +
			(daysFromStartOfYear(checkOutDay, endMonth, endYear));
	}

	return numberOfDays;
}