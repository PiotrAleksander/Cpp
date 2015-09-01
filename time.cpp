#include <iostream>
using namespace std;
#include "C:\Users\PiotrAleksander\cpprojects\TimeOfDay.h"

int main(void)
{
	TimeOfDay time1, time2;
	int hours = 19, minutes = 15;
	time1.setTime(7,35);
	time2.setTime(hours, minutes);
	cout << "Pierwsza godzina: ";
	time1.displayTime();
	cout << endl << "\nPierwsza godzina: ";
	time1.displayEnglishTime();
	cout << endl << "\nDruga godzina: ";
	time2.displayTime();
	cout << endl << "\nDruga godzina: ";
	time2.displayEnglishTime();
	cin >> hours;
	return 0;
}
