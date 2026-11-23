#include<iostream>
//enter number from user and print a multipication table 1 to 10
using namespace std;

int main()
{


	for (int i=1;i<=100;i++)
	{
		if (i%3==0 && i%5==0) 
		{
			cout<<"\n numbers are: "<<i;
		}
}
	return 0;
}