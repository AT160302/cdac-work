// min max digit in a number


#include<iostream>


using namespace std;
int main()

{
	int number,min, max,digit;
	cout<<"Enter a number:"; //read the number from user
	cin>>number;
	//assign last digit as min and max
	min= max= number%10;
	// use while loop till number is not zero
	//remove one digit at a time
	//compare with min max 
	//if less than min, update min
	
	
	
	while(number>0)
	{
		digit=number%10;
		if(digit<min)
		{
			min=digit;
		}
			else if(digit>max)
		{
			max=digit;
		}
		number=number/10;
		
	}
		cout<<"\n from a given number min is: "<<min<<"max is "<<max;
	
	
	return 0;
}


