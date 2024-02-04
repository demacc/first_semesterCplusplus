#include<iostream>
#include<cstdlib> //random libary
#include <ctime>
using namespace std;

int main(){

    int magic,guess;
    srand(time(0));
    // any random number
    magic= rand(); 
   

    magic = rand() % 10;
    cout << magic << endl;
    cout << "Enter guess number \n";
    cin >> guess ;
    if(guess == magic){
        cout << "Right \n";
    } else {
        cout << "Guess Again \n";
    }


    return 0;
}