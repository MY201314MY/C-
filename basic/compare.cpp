#include <iostream>
#include <stdio.h>
using namespace std;

 int* max(int* x, int* y){
    return *x>*y?x:y;
}
int max(int x, int y){
    return x>y?x:y;
 }
int main(){
    int a=7,b=4;
    cout<<"The max is: "<<(*(max(&a, &b)))<<endl;
    cout<<"The Max is: "<<max(3,2)<<endl;
    
    return 0;
}

/*
/home/m/essential/cmake-build-debug/essential
The max is: 7
The Max is: 3

Process finished with exit code 0
*/
