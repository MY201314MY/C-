#include <iostream>

using namespace std;

#define x>y?x:y
#define square(x,y) x*y
void led(bool s)
{
    cout<<s<<endl;
    cout<<"ON"<<endl;
};
#define LED_ON led(true)
int main(){
    cout<<"The min is:";
    cout<<(3.17,2.23) << endl;
    LED_ON;
    cout<<"- - - -"<<endl;
    cout<<square(3,4);
    return 0;
}

/*
/home/m/essential/cmake-build-debug/essential
The min is:2.23
1
ON
- - - -
12
Process finished with exit code 0
*/
