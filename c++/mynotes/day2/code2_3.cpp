
#include<iostream>
//An array is given. Reverse the array without using another array. 
using namespace std;
int main()
{
	int n=5;
	int a[n]={11,22,33,44,55};//Initialize all elements of the array to zero. 
	cout<<"\nArray consists of :\n";
	
	for(int i=n-1;i>=0;i--)
	{
		cout<<"\n at a["<<i<<"]: "<<a[i];//Will print garbage values because initially there will be garbage. 
	}
	//reverse
	

	for(int i=0, j=n-1; i<j; i++, j--)
	{
		int temp=a[i];
		a[i]= a[j];
		a[j]= temp;
		
	}
	
	cout<<"\nAfter Reversed Array consists of :\n";
		cout<<"\n at a["<<<<"]: "<<a[];//Will print garbage values because initially there will be garbage. 
	}

	return 0;
}
