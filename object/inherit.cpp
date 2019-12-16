#include <iostream>
#include <string.h>
using namespace std;
class identify{
public:
    char name[128];
    int ID;
};
class shape{
public:
    void setLength(int l){
        length = l;
    }
    void setWidth(int w){
        width = w;
    }

protected:
    int length;
    int width;
};

class Rectangle: public shape, public identify{
public:
    int area(){
        return width*length;
    }
};

int main(){
    Rectangle rect;
    rect.setLength(4);
    rect.setWidth(8);
    cout<<rect.area();
    strcpy(rect.name,"Hello,world.");
    rect.ID=1314;
    cout<<"Name: "<<rect.name<<endl<<"ID: "<<rect.ID<<endl;


    return 0;
}

/*
/home/m/essential/cmake-build-debug/essential
32Name: Hello,world.
ID: 1314

Process finished with exit code 0
*/
