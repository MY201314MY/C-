#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    auto f=3.14;
    auto s("hello,world.");
    //int*
    auto x = new auto(9);
    cout<<f<<endl<<s<<endl<<x<<endl;


    return 0;
}

/*
/home/m/essential/cmake-build-debug/essential
3.14
hello,world.
0x5585b1918e70

Process finished with exit code 0
*/
