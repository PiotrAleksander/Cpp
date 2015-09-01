#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159266536;

void displayInitialGreeting()
{
	cout << "Witaj w świecie C++!" << endl;
}

double computeSquare(double base, double exponent)
{
	double power = exponent +1;
	return pow(base, power);
}

void displayResults(double y)
{
	cout << "W świecie tym kwadrat liczby pi wynosi " << y << endl;
	cout << "Miłego dnia!" << endl;
}

int main(void)
{
	double x=PI, y;
	displayInitialGreeting();
	y = computeSquare(x,1);
	displayResults(y);
	cin >> y;
	return 0;
}
