#include <iostream>
#include <stdio.h>
using namespace std;
#define length 10
int main(){
    double array[length];

    cout<< sizeof(double)<<endl;
    for(int i=0;i<length;i++){
        array[i]=i;
    }

    for(int i=0;i<length;i++){
        cout<<array[i]<<"-";
    }
    cout<<"\n";
    for(int i=0;i<length;i++){
        cout<<(*(array+i))<<"-";
    }

    return 0;
}
/home/m/essential/cmake-build-debug/essential
8
0-1-2-3-4-5-6-7-8-9-
0-1-2-3-4-5-6-7-8-9-
Process finished with exit code 0

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
using namespace std;

int main(){
    char greeting[] = "Hello,welcome to New York.";
    cout<<"Address:"<<&greeting<<endl;
    cout<<greeting<<endl;

    for(int i=0;i<strlen(greeting);i++){
        cout<<greeting[i];
    }
    cout<<endl;
    for(int i=0;i<strlen(greeting);i++){
        cout<<*(greeting+i);
    }
    cout<<endl;
    unsigned short i = 0;
    while (greeting[i]!='\0'){
        cout<<greeting[i];
        i+=1;
    }

    string a="hello";
    string b="world.";

    cout<<a.length()<<endl;


    return 0;
}
