#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1415926536;

void displayInitialGreeting()
{
	cout << "Witaj w świecie C++!\n" << endl;
}

void displayResults(double y)
{
	cout << "W świecie tym kwadrat liczby pi wynosi " << y << endl;
	cout << "Miłego dnia!\n" << endl;
}

int main(void)
{
	double x=PI, y=1, z;
	displayInitialGreeting();
	z = y+1;
	y = pow(x,z);
	displayResults(y);
	cin >> z;
	return 0;
}