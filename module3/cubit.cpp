#include <iostream>
#include<cstdlib>

using namespace std;

int main(){
    int cubitNum ;

    srand(time(0));
    cubitNum = rand();
    
    for (int i=0 ; i<=5 ; i++){
        cubitNum = rand() % 6;
    }


    return 0;
}