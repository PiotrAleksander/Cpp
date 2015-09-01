#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1415926;

void displayInitialGreeting()
{
	cout << "Witaj w świecie C++!\n" << endl;
}

int main(void)
{
	double x=PI, y=1, z;
	displayInitialGreeting();
	z = y+1;
	y = pow(x,z);
	cout << "W świecie tym kwadrat liczby pi wynosi " << y << endl;
	cout << "Wprowadź swoją potęgę: ";
	cin >> z;
	y = pow(x,z);
	cout << "Potęga " << z << "liczby pi wynosi " << y << endl;
	cout << "Miłego dnia!" << endl;
	cin >> z;
	return 0;
}