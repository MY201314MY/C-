#include <iostream>

using namespace std;

int main(){
    enum fruit{
        apple,
        orange=5,
        banana,
    };

    fruit x;
    cout<<x<<endl;
    x=orange;
    cout<<x<<endl;
    return 0;
}
