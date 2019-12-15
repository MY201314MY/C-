#include <iostream>
#include <stdio.h>
using namespace std;


int main(){
    cout<<"TYPE"<<endl;

    unsigned x;
    x = 655360;
    cout<<x<<endl;

    unsigned int y=655350;
    cout<<y<<endl;
    y +=1;
    cout<<y<<endl;

    short int i;
    short unsigned int j;

    j=50000;
    i=j;
    cout<<j<<endl<<i<<endl;

    return 0;
}

/*
/home/m/essential/cmake-build-debug/essential
TYPE
655360
655350
655351
50000
-15536

Process finished with exit code 0
*/
