#include<iostream>
using namespace std;

int main()
{
    cout << "What time it is? \n";
    cout << "Descibe your time in 24-hour time format: ";
    int time;
    cin >> time;
    if (time >= 0 && time <=12) {
        cout << "It's " << time << " AM.\n Good Morining Sir!,Have a nice day. \n" ;
    } else if ( time >12 && time<=17 ) {
        cout << "It's " << time-12 << " PM.\n Good afternoon Sir!,Have a nice day. \n" ;
    } else if ( time >17 && time <= 21) {
      cout << "It's " << time-12<< " PM.\n Good evening Sir!,Have a nice day. \n" ;
    } else {
      cout << "It's " << time-12<< " PM.\n Good night Sir!! \n" ;
    }
    return 0;

}