#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

enum Function
{
	sinsin,
	coscos,
};

float integral(float a,float b,float d,enum Function F)
{
	if(a>b||d<=0)
	{
		cout<<"Enter date error!"<<endl;
		return -1;
	}

	else
	{
		double result=0;
		switch(F)
		{
		    case sinsin:
				{
					for(;a<b;a+=d)
					{
						result+=sin(a)*d;
					}
				}
				break;

			case coscos:
				{
					for(;a<b;a+=d)
					{
						result+=cos(a)*d;
					}
				}
				break;

			default:break;
		}
		return result;
	}
}
int main()
{
	float a,b,d;

    cout<<"Please input the date:"<<endl;
	cin>>a;
	cin>>b;
	cin>>d;

	cout<<integral(a,b,d,sinsin)<<endl;
	return 0;
}
