#include<iostream>

using namespace std;
int main()
{
	int choice;
	do
	{
		//menu
		cout<<"\nApni Taprii ";
		cout<<"\n1.Tea";
		cout<<"\n2.Coffee";
		cout<<"\n3.Water";
		cout<<"\n0.Exit";
		cout<<"\n:";
		//input
		cin>>choice;
		//switch to do taks
		switch(choice)
		{
			case 1:
				cout<<"\nYou selected Tea";
				break;
			case 2:
				cout<<"\nYou selected Coffee";
				break;
			case 3:
				cout<<"\nYou selected Water";
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
