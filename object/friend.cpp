#include <iostream>
using namespace std;

class Line{
private:
    int len;
public:
    void setLength(int length);
    int getLength(void);
    Line(int length);

    friend void println(Line line);

};
Line::Line(int length) {
    len = length;
}
void Line::setLength(int length) {
    len = length;
}
int Line::getLength() {
    return len;
}

void println(Line line){
    cout<<"friend."<<endl;
    cout<<line.getLength()<<endl;
}
int main(){
    Line line(12);
    cout<<line.getLength()<<endl;
    line.setLength(24);
    cout<<line.getLength()<<endl;

    println(line);
    return 0;
}

