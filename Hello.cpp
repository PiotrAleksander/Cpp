#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.1415926;
int main(void)
{
    double x=PI, y=1, z;
    cout << "Witaj w �wiecie C++!" << endl;
    z = y+1;
    y = pow(x,z);
    cout << "W �wiecie tym kwadrat liczby pi wynosi " << y << endl;
    cout << "Wprowad� pot�g�: " << endl;
    cin >> z;
    y = pow(x,z);
    cout << "Pi podniesione do pot�gi " << z << " wynosi " << y << endl;
    cout << "Mi�ego dnia!" << endl;
    cin >> z;
    return 0;
}
