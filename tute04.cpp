#include <iostream>

using namespace std;

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;

  cout << "Enter a value for n ";
  cin >> n;

  cout << "Enter a value for r ";
  cin >> r;

  cout << "nCr = ";

  cout << nCr(n,r);

  

  return 0;
}

long Factorial(int no)
{
    int fac = 1;
    int i;

    for ( i = no ; i >= 1 ; i-- ) 
    {
        fac = fac * i;
    }

    return fac;
}

long nCr(int n, int r)
{
    long final = 0 ;

    final = Factorial(n) / ( Factorial(r) * Factorial(n-r) ) ;

    return final;


}

