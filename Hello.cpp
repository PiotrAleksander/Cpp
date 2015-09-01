#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.1415926;
int main(void)
{
    double x=PI, y=1, z;
    cout << "Witaj w œwiecie C++!" << endl;
    z = y+1;
    y = pow(x,z);
    cout << "W œwiecie tym kwadrat liczby pi wynosi " << y << endl;
    cout << "WprowadŸ potêgê: " << endl;
    cin >> z;
    y = pow(x,z);
    cout << "Pi podniesione do potêgi " << z << " wynosi " << y << endl;
    cout << "Mi³ego dnia!" << endl;
    cin >> z;
    return 0;
}
