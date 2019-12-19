#include <iostream>
using namespace std;

int main(int argc,int *argv[])
{
	cout<<"Please input ten numbers:"<<endl;

	const int size=10;
	int a[size]={0};

	for(int i=0;i<size;i++)
		cin>>a[i];

	for(int j=0;j<(size-1);j++)
	{
		for(int k=0;k<(size-j-1);k++)
		{
			if(a[k]>a[k+1])
			{
				int tmp;

				tmp=a[k];
				a[k]=a[k+1];
				a[k+1]=tmp;
			}
		}
		for(int m=0;m<size;m++)
			{
		        cout<<a[m]<<'\t';
			}
			cout<<endl;
	}

	cout<<"And the new order:"<<endl;
	for(int m=0;m<size;m++)
	{
		cout<<a[m]<<'\t';
	}
	cout<<endl;

	return 0;
}
