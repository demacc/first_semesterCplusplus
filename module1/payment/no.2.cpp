#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
    double Payment,IntRate,Principal,PayPerYear,NumYears;
    // Principal
    cout << "Principal Value: ";
    cin >> Principal;
    // PayPerYear
    cout << "PayPerYear Value: ";
    cin >> PayPerYear;
    double x;
    x = Principal / PayPerYear;
    cout << x << endl;
    // inrate
    cout << "InRate Value: " ;
    cin >> IntRate;
    double y;
    y = (IntRate / PayPerYear)+1;
    cout << y << endl;
    // NumYears
    cout << "NumYears Value: ";
    cin >> NumYears;
    double z;
    z = -PayPerYear*NumYears;
    cout << z << endl;
    double q;
    q = 1-pow(y,z);
    cout << q << endl;
    Payment = IntRate*(x/q);
    cout << "The Payment is " << Payment ;
    return 0;
}