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
    cout << endl << "\nMi³ego dnia.\n" << endl;
    cout << "Naciœnij 'k' i potwierdŸ enterem" << endl;
    cin >> koniec;
    return 0;
}
