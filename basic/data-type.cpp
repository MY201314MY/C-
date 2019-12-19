#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	bool flag =true;
	
	cout<<flag<<endl;
	printf("\\");
	printf("\'");
	printf("\"");
	cout<<endl;
	
	__int8 a=97;
	cout<<(int)a<<endl;
	
	cout<<sizeof(char)<<endl;
	cout<<sizeof(short int)<<endl;
	cout<<sizeof(int)<<endl;
	cout<<sizeof(float)<<endl;
	cout<<sizeof(long)<<endl;
	cout<<sizeof(long long)<<endl;
	cout<<sizeof(double)<<endl;
	cout<<sizeof(long double)<<endl;
	
	return EXIT_SUCCESS;
}
