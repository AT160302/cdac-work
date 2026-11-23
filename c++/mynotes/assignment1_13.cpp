//Electricity Bill

#include <iostream>
using namespace std;

int main(){
	float units;
	float rate;
	float bill;
	cout<<"Enter the units: ";
	cin>>units;
	cout<<"Enter the rate: ";
	cin>>rate;
	bill= units*rate;
	cout<<"The total bill is: "<<bill<<"\n";
	
	
	if(bill>2000){
		cout<<"High consumption ";
	}
	else {
		cout<<"Low consumption ";
	}
	return 0;
}