#include <iostream>
#include <string.h>
using namespace std;
class print{
public:
    void show(int i){
        cout<<i<<endl;
    }
    void show(double i){
        cout<<i<<endl;
    }
    void show(bool i){
        cout<<i<<endl;
    }
};

int main(){
    print x;
    x.show(1);
    x.show(false);
    x.show(3.14);

    return 0;
}
/*
/home/m/essential/cmake-build-debug/essential
1
0
3.14

Process finished with exit code 0
*/
