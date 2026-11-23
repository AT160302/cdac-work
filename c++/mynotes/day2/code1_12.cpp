#include<iostream>
//1,3,5
using namespace std;
int main()
{
	for (int i=1;i<=13;i=i+2)
	//one can shorthand operator
	//i=i+2 or i+=2
	{
		cout<<i<<",";
	}	
	return 0;
}