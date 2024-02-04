#include<iostream>
using namespace std;

int main(){
    int math , eng , sum;
    cout << "enter_Math_marks : ";
    cin >> math;
    cout << "enter_Eng_marks : ";
    cin >> eng;
    sum = math + eng;
    cout << "total_vlaue : " << sum << endl;
    cout << "average_value :  " << sum/2 << endl;
    return 0;
}