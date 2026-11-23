#include <iostream> 
using namespace std;


// Create an abstract Employee class with a pure virtual calculateSalary() function. Create a derived class that calculates the employee's salary.


class Employee {
	public: 
	virtual void calculateSalary() =0;
	
};

class premenentEmployee : public Employee {
	public: 
	void calculateSalary() override {
		
		int basicSalary, bonus;
		cout<<"\n Enter the Basic salary: ";
		cin>>basicSalary;
		cout<<"\n Enter the bonus: ";
		cin>>bonus;
		
		int totalSalary= basicSalary+ bonus;
		cout<<"\n Total salary: "<<totalSalary;
	}
};

int main() {
//	premenentEmploye p;
//	p.calculateSalary();
//	return 0;

premenentEmployee e;
premenentEmployee *p= &e;
p->calculateSalary();



}
