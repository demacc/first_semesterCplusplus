#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    // variable declare
    int x,y;
    // user input for x values
    cout << "Enter x vaules: ";
    cin >> x;
    // user input for y values
    cout << "Enter y values: ";
    cin >> y;
    // processing hypotenuse
    double hypotenuse = sqrt(pow(x,2)+ pow(y,2));
    cout << "Hypotenuse values is "<<hypotenuse << endl;
    return 0;
}