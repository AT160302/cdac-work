//we can reserve a nim the foll formula to reverse a number


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
	int number,r_number=0,digit;
	cout<<"Enter a number:";
	cin>>number;
	
	while(number>0)
	{
		digit=number%10;
		
		//sum=sum
		r_number= r_number*10+digit;
		number=number/10;
	}
	
		
	cout<<"\treserve number is "<<r_number;
	return 0;
}


