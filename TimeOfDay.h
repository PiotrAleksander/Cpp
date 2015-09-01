#include <iostream>
using namespace std;

class TimeOfDay
{
	private:
		int hours, minutes;
	public:
		void setTime(int hrs, int min)
		{
			hours = hrs; minutes = min;
		}
		void displayTime(void)
		{
			cout << hours << ":" << minutes;
		}
		void displayEnglishTime(void)
		{
			if (hours>12)
				cout << hours-12 << ":" << minutes << "P.M.";
			else
				cout << hours << ":" << minutes << "A.M.";
		}
};
