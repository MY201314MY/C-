#include <iostream>
using namespace std;

class student{
public:
protected:
    int width, height;
public:
    student(int a=0, int b=0){
        width=a;
        height=b;
    }
    int area(){
        cout<<"Hello"<<endl;

        return 369;
    }
};

class kangkang: public student{
public:
    kangkang(int a=0, int b=0):student(a,b){}
    int area(){
        cout<<"world"<<endl;
        return (width*height);
    }
};

int main(){
    printf("Hello,world");

    kangkang x(2,3);

    student *p;
    p=&x;
    cout<<p->area()<<endl;
    cout<<x.area()<<endl;

    return 0;
}

/home/m/essential/cmake-build-debug/essential
Hello,worldHello
369
world
6

Process finished with exit code 0
