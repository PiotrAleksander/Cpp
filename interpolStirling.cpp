//metoda Stirling to tabela różnic centralnych. Kolejne różniczki(sigma) są obliczane na podstawie nieskomplikowanego wzoru w którym stosujemy podstawowy krok
#include <iostream>
using namespace std;

const int N=5;
double t[N][N+1]={
	{0.8, 4.80},
	{0.9,5.85},
	{1, 7.00},
	{1.1, 8.25},
	{1.2, 9.60}
};

struct POCHODNE{double f1, f2;};

POCHODNE stirling(double t[N][N+1])
{
	POCHODNE res;
	double h=(t[4][0]-t[0][0])/(double)(N-1);
	for(int j=2;j<=N;j++)
		for(int i=0;i<=N-j;i++)
			t[i][j]=t[i+1][j-1]-t[i][j-1];
	res.f1=((t[1][2]+t[2][2])/2.0-(t[0][4]+t[1][4])/12.0)/h;
	res.f2=(t[1][3]-t[0][5]/12.0)/(h*h);
	return res;
}
int main()
{
    char k;
	POCHODNE res=stirling(t);
	cout<< "f'=" << res.f1 << ", f''=" << res.f2 <<endl;
	cin >> k;
}
