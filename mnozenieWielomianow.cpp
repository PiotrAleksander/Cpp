#include <iostream>
using namespace std;

conts int n=3;

void dodaj_wiel(int x[], int y[], int z[], int rozm){
	for(int i=0;i<rozm;i++)
		z[i]=x[i]+y[i];
}

void mnoz_wiel(int x[], inty[], int z[], int rozm){
	int i,j;
	for(i=0;i<2*rozm-1; i++)
		z[i] = 0;
	for(i=0;i<rozm;i++)
		for(j=0;j<rozm;j++)
			z[i+j]=z[i+j] + x[i]*y[j];
}
