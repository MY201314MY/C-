#include <iostream>

using namespace std;

int main(){
    cout<<"Hello,world."<<endl;
    int x,y=1;
    cout<<(x=1)<<endl;
    cout<<(x = y)<<endl;

    cout<<(x = y = 2)<<endl;
    return 0;
}
/*
/home/m/essential/cmake-build-debug/essential
Hello,world.
1
1
2

Process finished with exit code 0
*/
