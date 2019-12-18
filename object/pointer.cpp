#include <iostream>
using namespace std;
class box{
public:
    box(int w, int h){
        width=w;
        height=h;
    }
    int get_length(void){
        return width;
    }
    int get_height(){
        return height; 
    }

private:
    int width,height;
};
int main(){
    box A(3,9);
    box B(5,2);
    box *p =&A;
    cout<<"The width of A:"<<p->get_length()<<endl;
    p=&B;
    cout<<"The height of B:"<<p->get_height()<<endl;
    return 0;
}
