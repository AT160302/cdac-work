#include<iostream>
#include<string>
using namespace std;
/*
Write a C++ program to create a function GCD(no1, no2) that accepts two integers and returns the Greatest Common Divisor (GCD) of the given numbers.
The GCD is the largest positive number that can divide both given numbers exactly


*/
int GCD (int no1, int no2)
{
	if(no1%no2==0)
		return no2;
	else
		return GCD(no2,no1%no2);
}

int main()
{
	int no1, no2;
		cout<<"enter the num : ";
		cin>>no1;
		
		cout<<"enter the num : ";
		cin>>no2;
		
		cout << "The GCD of " << no1 << " and " << no2 << " is: " << GCD(no1, no2) << endl;
}

	
