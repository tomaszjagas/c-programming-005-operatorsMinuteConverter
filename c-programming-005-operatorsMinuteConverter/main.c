/******************************
* Description: Minute converter
*******************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numberOfMinutes = 0;
	double years = 0.0;
	double days = 0.0;
	double minutesInYear = 0.0;

	printf("Enter number of minutes: ");

	//get input from user
	scanf_s("%d", &numberOfMinutes);

	minutesInYear = (60 * 24 * 365);
	years = (numberOfMinutes / minutesInYear);
	days = (numberOfMinutes / 60.0) / 24.0;

	printf("%d minutes is %f years and %f days\n", numberOfMinutes, years, days);

	return 0;
}