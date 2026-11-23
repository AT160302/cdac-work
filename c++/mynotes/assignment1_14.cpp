// Loan Eligibility

#include <iostream>
using namespace std;

int main(){
	int age;
	float monthly_salary;
	
	cout<<"Enter the age: ";
	cin>>age;
	cout<<"Enter the monthly salary: ";
	cin>>monthly_salary;
	
	if(age>=21 && monthly_salary >= 25000){
		cout<<"Loan eligible ";
	}
	else {
		cout<<"Loan not eligible ";
	}
	return 0;
}