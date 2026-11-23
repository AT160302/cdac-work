//Shopping Discount


#include <iostream>
using namespace std;


int main(){
	float amount;
	float discount;
	cout<<"Enter the amount: \n";
	cin>>amount;
	if(amount>=5000){
	
		discount = amount*0.1;
		cout<<"The final amount to pay is: "<<amount-amount*0.1<<endl;
	}	//cin>>discount;
	else {
	
		cout<<"The final amount to pay is: "<<amount;
	}

	return 0;
}