#include<iostream>
using namespace std;

int main()
{
    int result;
    // user result
    cout << "Enter your exam result: ";
    cin >> result;
    // result condition statement
    if (result >= 50 &&  result< 80)  {
        cout << "Exam Pass!!\n";
    } else if ( result >=80 && result <=100) {
           cout << "Distinction!!\n";
    } else if ( result > 100 ){
        cout << "Result isn't valid. \n";
    } else {
           cout << "Exam Fail!!! \n";
    }

    return 0;
}
