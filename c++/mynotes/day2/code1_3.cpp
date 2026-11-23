
#include<iostream>
//Write a program Check whether a given number is Armstrong or not. 
//Given a three-digit number, an Armstrong number is a number where, 
//if the individual digits are cubed and added together, 
//the number itself will be regenerated. 
//153--->1^3+5^3+3^3-->153
//If sum = number then it is Armstrong. 
//We need to maintain a number. 
//Accept a number--->create a copy of it, 
//calculate the sum, and then compare with the original. 
using namespace std;
int main()

{
	int number,number1,sum=0,digit;
	cout<<"Enter a number:";
	cin>>number;
	number1= number;
	while(number1>0)
	{
		digit=number1%10;
		number1=number1/10;
		sum=sum+(digit*digit*digit);
	}
		if (number=number1){
			cout<<"then it is a armstrong number";
		}
		else
		{
			cout<<"then it is not a armstrong number";
		}
		
	cout<<"\tsum of total:"<<sum;
	return 0;
}


