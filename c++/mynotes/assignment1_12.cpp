//Find the Bigger Number

#include <iostream>
using namespace std;

int main(){
	int number1;
	int number2;
	cout<<"Enter the first number: ";
	cin>>number1;
	cout<<"Enter the second number: ";
	cin>>number2;
	if(number1>number2){
		cout<<number1<< " is greater than "<<number2;
	}
	else if(number2>number1){
		cout<<number2<< " is greater than "<<number1;
	
	}
	else {
		cout<<number1<< " is equal to "<<number2;
	}
	return 0;
}