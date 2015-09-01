#include <iostream>
using namespace std;

const int n=3; //stopień wielomianu interpolującego, czyli tego, dzięki któremu mamy wartości dla wspólnych argumentów

double x[n+1]={3.0, 5.0, 6.0, 7.0};
double y[n+1]={1.732, 2.236, 2.449, 2.646};
// to była w istocie funkcja y=x**(1/2)

double interpol(double z, double x[n], double y[n]) //podziękowania dla P. Wróblewskiego za przetłumaczenie "makabrycznego" wzoru Lagrange'a na zagnieżdżone pętle
{
	double wnz=0, om=1, w;
	for(int i=0;i<=n;i++)
	{
		om=om*(z-x[i]);
		w=1.0;
		for(int j=0;j<=n;j++)
			if(i!=j) w=w*(x[i]-x[j]);
		wnz=wnz+y[i]/(w*(z-x[i]));
	}
	return wnz=wnz*om;
}

int main()
{
	double z=4.5;
	cout << "Wartość funkcji x**(1/2) w punkcie " << z << " wynosi " << interpol(z,x,y) <<endl;
	cout << "Proszę podać argument: ";
	cin>>z;
	cout << "Wartość funkcji x**(1/2) w punkcie " << z << " wynosi " << interpol(z,x,y) <<endl;
	cin>>z;
}
