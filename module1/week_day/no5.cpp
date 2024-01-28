#include<iostream>
using namespace std;

int main()
{
    // user input
    int day;
    cout << "type_day: ";
    cin >> day;
    if(day==1){
        cout << "Sunday!";
    } else if (day==2){
        cout << "Monday";
    } else if (day==3){
        cout << "Tuesday";
    } else if (day==4){
        cout << "Wednesday";
    } else if (day==5){
        cout << "Thursday";
    } else if (day==6){
        cout << "Saturday";
    } else if (day==7){
        cout << "Sunday";
    } else {
        cout << "Type only 1-7 for the week";
    }
    return 0;
}