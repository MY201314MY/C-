#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <ctime>
using namespace std;

int main(){
    time_t m = time(0);
    char *time = ctime(&m);
    cout<<time<<endl;

    tm* item = localtime(&m);
    cout<<1900+item->tm_year<<"-"<<1+item->tm_mon<<"-"<<item->tm_mday<<"-"<<item->tm_hour<<"-"<<item->tm_min<<"-"<<item->tm_sec;
    
    return 0;
}

/home/m/essential/cmake-build-debug/essential
Sun Dec 15 17:29:58 2019

2019-12-15-17-29-58
Process finished with exit code 0
