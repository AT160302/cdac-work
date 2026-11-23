//Speeding Fine

#include <iostream>
using namespace std;

int main(){
	float speed;
	cout<<"Enter the speed: ";
	cin>>speed;
	cout<<"The speed: "<<speed<<"km/hr \n";
	if(speed>80){
		cout<<"Car have a fine of Rs 2000";
	}
	else {
		cout<<"No fine on car";
	}
	return 0;
}