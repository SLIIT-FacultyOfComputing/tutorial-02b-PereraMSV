#include <iostream>

using namespace std;

int main(void)
{
    int no, r;
    long fac;

    cout << "Enter a Number : " ;
    cin >> no ;

    fac = 1;
    for ( r = no ; r >= 1 ; r-- ) 
    {
        fac = fac * r;
    }

    cout << "Factorial of "<< no <<  " is " << fac ;  
    return 0;
}