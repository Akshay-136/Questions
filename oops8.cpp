// random number for dice

#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){

    srand(time(0));
    for (int x = 1; x<10 ; x++){
        cout<<1+(rand()%6)<<endl;
    }
}