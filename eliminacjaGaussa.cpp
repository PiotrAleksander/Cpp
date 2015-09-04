#include <iostream>
using namespace std;

const int N=3;

double x[N];

double a[N][N+1]=
{
       {5, 0, 1, 9},
       {1, 1, -1, 6},
       {2, -1, 1, 0}
};

int gauss(double a[N][N+1], double x[N])
{
    int max;
    double tmp; //przechowuje podmieniane wiersze
    for(int i=0; i<N; i++) //sprowadzanie do macierzy trójk¹tnej
    {
            max=i;
            for(int j=i+1; j<N; j++)
                    if(fabs(a[j][i])>fabs(a[max][i]))
                      max=j;
                    for(int k=i; k<N+1; k++)
                    {
                            tmp=a[i][k];
                            a[i][k]=a[max][k];
                            a[max][k]=tmp;
                    }
                    if(a[i][i]==0)
                      return 0;
                    for(j=i+1; j<N; j++)
                      for(k=N; k>=i; k--)
                      a[j][k]=a[j][k]-a[i][k]*a[j][i]/a[i][i]; //mno¿enie wiersza j przez wspó³czynnik zeruj¹cy zmienne
                      }
                    for(int j=N-1; j>=0; j--)
                    {
                            tmp=0;
                            for(int k=j+1; k<=N; k++)
                            tmp=tmp+a[j][k]*x[k]
                            x[j]=(a[j][N]-tmp)/a[j][j];
                    }
                    return 1;
                    }
    int main()
    {
        if(!gauss(a,x))
          cout<< "Uklad sprzeczny!\n";
        else
        {
            cout << "Rozwiazanie: \n";
            for(int i=0; i<N; i++)
            cout << "x["<<i<<"]="<<x[i]<<endl;
            cin >> x;
            }
            }
                            
