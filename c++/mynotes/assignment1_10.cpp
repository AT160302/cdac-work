// Age Category

#include <iostream>
using namespace std;

int main(){
	int age;
	cout<<"Enter the age: ";
	cin>>age;
	cout<<"The age of a person is: "<<age<<"\n";
	if(age<13){
		cout<<"person is a child";
	}
	else if (age<=19) {
		cout<<"Person is teenager";
	}
	else {
		cout<<"Person is adult";
	}
	return 0;
}