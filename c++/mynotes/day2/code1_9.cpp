#include<iostream>


// write a program  for set numbers, add, multi, and division
using namespace std;
int main()
{
	int number1, quantity;
	int choice;
	do
	{
		//menu
		//float cost_tea=20;
		float number1=0, number2=0,sum,sub;
		
		cout<<"\nCalculator ";
		cout<<"\n1.Set two numbers";
		cout<<"\n2.Add";
		cout<<"\n3.Substract";
		cout<<"\n4.multiply";
		cout<<"\n5.divide";
		
		cout<<"\n0.Exit";
		cout<<"\n:";
		//input
		cin>>choice;
		//switch to do task
		switch(choice)
		{
			case 1:
				cout<<"\nEnter first number: ";
				cin>>number1;
				cout<<"\nEnter second number: ";
				cin>>number2;
				cout<<"\n numbers are set";
				break;
			case 2:
				cout<<
				sum= number1+number2;
				cout<<"\n Adding is: "<<sum;
				break;
			case 3:
				cout<<"\nEnter first number: "<<number1<<" and second number"<<number2;
				//cin>>quantity;
				sub= number2-number1;
				cout<<"\n Substraction is: "<<sub;
				break;			
			case 0:
				cout<<"\nExiting system. Thanks for using it. ";
				break;			
			default:
				cout<<"\nInvalid choice.";
				break;
		}
	}while(choice!=0);//Till exit option is not selected. 
	return 0;
}
