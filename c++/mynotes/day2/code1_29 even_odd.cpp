#include<iostream>
//Write a program which will continue accepting numbers with even or odd number and sum of them
//till the user gives 0 / a negative number to stop. 
using namespace std;
int main()
{
	int number, sum;
	int count_even=0,count_odd=0;
	
	while(true)
	{
		cout<<"\nEnter number even or odd or 0 to stop:";
		cin>>number;
		
		if(number<=0)
			{
				cout<<"\nEnding the system. ";
				break;
			}
			else if (number%2==0){
				cout<<"\nnumber is even : ";
				count_even++;
				
			}
				else  {
					cout<<"\nnumber is odd: ";
					//cout<<"odd number";
					count_odd++;
				}
			
	
	}
	cout<<"\ntotal number : "<<count_even+count_odd;
	cout<<"\ntotal sum : "<<sum(count_even)+sum(count_odd)+;
	cout<<"\ntotal even : "<<count_even;
	cout<<"\ntotal odd : "<<count_odd;
	return 0;
}
