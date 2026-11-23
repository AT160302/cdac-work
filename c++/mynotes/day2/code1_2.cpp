#include<iostream>
//write a prog to print the sem of all digit in a given number
//123 1+2+3. 
//Output is individual digits printed. 
//Process % to extract the last digit and / to remove the last digit. 
//Input is: read the number from the user. 
using namespace std;
int main()
{
	int number,sum=0,digit;
	cout<<"Enter a number:";
	cin>>number;
	while(number>0)
	{
		digit=number%10;
		number=number/10;
		sum=sum+digit;
		
	}
	cout<<"\tsum of total:"<<sum;
	return 0;
}


