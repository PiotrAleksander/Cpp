#include <iostream>
using namespace std;

const double epsilon=0.0001;

double f(double x)
       {
       return 3*x*x-2;
       }
double fp(double x)
       {
       return 6*x;
       }

double zero(double x0, 
                   double(*f)(double), 
                   double(*fp)(double)
                   )
{
                   if(f(x0)<epsilon)
                   return x0;
                   else
                   return (zero(x0-f(x0)/fp(x0), f, fp));
                   }
                   double alt;
int main()
{
    cout << zero(1,f,fp)<<endl;
    cin >> alt;
    cout << zero(alt,f, fp)<<endl;
    cin >> alt;
}
