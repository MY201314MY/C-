#include <iostream>
using namespace std;

class box{
public:
    float length;
    float breadth;
    float heignt;
};


int main(){
    box much;
    much.length=2;
    much.breadth=4;
    much.heignt=8;

    float volume = much.heignt*much.breadth*much.length;
    cout<<"Result: "<<volume<<endl;

    return 0;
}
