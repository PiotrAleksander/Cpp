#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int num=8, square;
    char koniec;
    cout << "Liczby   Ich kwadraty" << endl << endl;
    while(num<13)
    {
                 square=num*num;
                 cout << setw(4) << num << setw(10) << square << endl;
                 num++;
    }
    cout << endl << "\nMi�ego dnia.\n" << endl;
    cout << "Naci�nij 'k' i potwierd� enterem" << endl;
    cin >> koniec;
    return 0;
}
