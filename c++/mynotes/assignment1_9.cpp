//Simple Interest Calculator

#include <iostream>
using namespace std;

int main(){
	float P;
	float R;
	float T;
	float SI;
	float amount;
	cout<<"Enter the principal: ";
	cin>>P;
	cout<<"Enter the rate of interest: ";
	cin>>R;
	cout<<"Enter the time: ";
	cin>>T;
	SI = (P*R*T)/100;
	cout<<"Simple Interest: "<<SI<<"\n";
	amount= P+SI;
	cout<<"The total amount is: "<<amount;
	return 0;
}