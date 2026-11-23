#include<iostream>
/*
XXXXX
XXXX
XXX
XX
X
*/





using namespace std;

int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>=i;j--)
		{
			cout<<"x";
		}
		cout<<endl;
	}
	return 0;
}