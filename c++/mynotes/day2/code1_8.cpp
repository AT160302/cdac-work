#include<iostream>

using namespace std;
int main()
{
	int choice, bill, quantity;
	do
	{
		//menu
		//float cost_tea=20;
		int quantity;
		cout<<"\nApni Taprii ";
		cout<<"\n1.Tea is Rs20";
		cout<<"\n2.Coffee is Rs60";
		cout<<"\n3.Water is Rs15";
		cout<<"\n0.Exit";
		cout<<"\n:";
		//input
		cin>>choice;
		//switch to do task
		switch(choice)
		{
			case 1:
				cout<<"\nEnter number of Tea";
				cin>>quantity;
				cout<<"\n total generated bill is: "<<20*quantity;
				break;
			case 2:
				cout<<"\nEnter number of coffee";
				cin>>quantity;
				cout<<"\n total generated bill is: "<<60*quantity;
				break;
			case 3:
				cout<<"\nEnter number of water";
				cin>>quantity;
				cout<<"\n total generated bill is: "<<15*quantity;
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
