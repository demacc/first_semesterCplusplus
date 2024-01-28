#include<iostream>
using namespace std;

int main()
{
    int sum =0;
    int value;
    cout<< "type value: ";
    cin>> value;
    while (value)
    {
        sum +=value;
        cout <<sum << endl;
        cout<< "type value: ";
        cin>>value;   
    }
    
    return 0;
}