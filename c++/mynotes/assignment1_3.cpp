
// Salary After Bonus
#include <iostream>
using namespace std;

int main(){
	float basic_salary;
	float bonus;
	cout<<"Enter the basic salary: \n";
	cin >> basic_salary;
	bonus = basic_salary*0.1;
	cout<<"the bonus salary is: "<<basic_salary*0.1<<endl;
	cout<<"The total salary is: "<<basic_salary+bonus<<endl;
	return 0;
}