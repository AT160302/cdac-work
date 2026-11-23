#include<iostream>
//no=4 1x2x3x4
using namespace std;

int main()
{
	int n,multi=1;
	cout<<"Enter number:";
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cout<<i<<" x ";
		multi=multi*i;
	}	
	cout<<"="<<multi;
	return 0;
}
