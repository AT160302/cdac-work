#include<iostream>
//enter number from user and print a multipication table 1 to 10
using namespace std;

int main()
{
	int num;
	cout<<"Enter the table number: ";
	cin>>num;
	for (int i=1;i<=10;i++)
	{
		cout<<num<<"X"<<i<<"="<<num*i;
	}	
	return 0;
}