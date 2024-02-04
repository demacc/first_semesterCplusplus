#include<iostream>
using namespace std;

int main (){
    cout << "1kg = 2.2pound\n";
    float pound , ans ;
    cout<< "pound_to_kg\n";
    cout << "enter_pound : ";
    cin >> pound;
    ans = pound/2.2;
    cout << "Kg : " << ans;

    return 0;
}