#include<iostream>
//Modify the above program to print all the prime numbers from 
//the range of 1 to 50
using namespace std;
int main()
{	
	for(int num=1;num<=50;num++)
	{
		//cout<<"\nchecking with "<<num<<"%";
		bool flag=true;//Think positively that it is a prime number. 
		for(int i=2;i<num;i++) 
		{
		if(num%i==0)
			{
			  flag=false;
			  break;
			}
		}
		if(flag==true)
		cout<<endl<<num<<"is prime";
	}
	return 0;
}
