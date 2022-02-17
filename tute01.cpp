#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float cm, inches = 0;

    cout <<  "Enter a length in cm : " ;
    cin >> cm ;

    inches = cm / 2.54 ;

    cout << "Length in inches is " << setprecision(2) << setiosflags(ios::fixed) << inches ;


    return 0;
}