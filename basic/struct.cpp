#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct book{
    char title[128];
    char author[32];
    int id;
}m={"a","b",1};

typedef struct book mteaching;

void show(struct book Book){
    cout<<Book.title<<endl;
    cout<<Book.author<<endl;
    cout<<Book.id<<endl;
}
void show(struct book* monkey){
    cout<<monkey->title<<endl;
    cout<<monkey->author<<endl;
    cout<<monkey->id<<endl;
}
int main(){
    strcpy(m.title, "AUX");

    show(m);
    show(&m);

    mteaching x = {"x","y", 123456};
    show(x);
    return 0;
}
