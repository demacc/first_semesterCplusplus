#include<iostream>
using namespace std;

int main()
{
    int result;
    // user result
    cout << "Enter your exam result: ";
    cin >> result;
    // result condition statement
    if (result >= 40 &&  result< 60)  {
        cout << "Your grade is \"D\"\n";
    } else if ( result >= 60 && result <80) {
          cout << "Your grade is \"C\"\n";
    } else if ( result >=80 && result <=100) {
           cout << "Your grade is \"A\"\n";
    } else if ( result > 100 ){
        cout << "Result isn't valid. \n";
    } else {
           cout << "Exam Fail!!! \n";
    }

    return 0;
}