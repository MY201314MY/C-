#include <iostream>
using namespace std;
void swap(int* x, int* y){
    int temp;

    temp=*x;
    *x=*y;
    *y=temp;

}
int main(){
    int a=3, b=4;
    int*m=&a, *n=&b;
    cout<<&a<<endl;
    cout<<m<<endl;
    cout<<&m<<endl;
    cout<<a<<"--"<<b<<endl;
    swap(m,n);
    cout<<a<<"--"<<b<<endl;

    int*x=NULL;
    cout<<&x<<endl;
    cout<<x<<endl;

    return 0;
}
/*
/home/m/essential/cmake-build-debug/essential
0x7ffea8d83038
0x7ffea8d83038
0x7ffea8d83040
3--4
4--3
0x7ffea8d83048
0

Process finished with exit code 0
*/
