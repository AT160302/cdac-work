#include<iostream> 
using namespace std;

class Employee {
	public: 
	int employeeId;
	string name;
	
	protected:
	float salary;
	
	public: 
	Employee (int employeeId, string name,float salary) {
		this->employeeId= employeeId;
		this->name= name;
		this->salary= salary;
	}
	void displayE() {
		cout<<"Employee id: "<<employeeId<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"salary: "<<salary<<endl;
	}
	
	
	
};

class Manager : private Employee{
	public:
	string department;
	float bonus;
	float allowance;
	
	

	
	public:
	Manager (int employeeId, string name, string department,float salary,float bonus, float allowance ) : Employee(employeeId, name, salary){
		this->department=department;
		this->bonus=bonus;
		this->allowance=allowance;
//		cout<<"Department: "<<department<<endl;
	}
	
	void calculate() {
		cout<<"bonus: "<<bonus<<endl;
	    cout<<"allowance: "<<allowance<<endl;
	    int totalsal= salary+bonus+allowance;
	    displayE();
	   cout<<"totalsal: "<<totalsal<<endl;
	   
	}
};

class Developer : private Manager {
	private: 
	float salIncrement;
	
	public:
	Developer(int employeeId, string name, string department,float salary, float bonus, float allowance, float salIncrement) : Manager(employeeId, name, department, salary, bonus, allowance ) {
		this->salIncrement= salIncrement;
	
		cout<<"salIncrement: "<<salIncrement+1000<<endl;
		int totalsal= salary+bonus+allowance+salIncrement;
		cout<<"updated salary: "<<totalsal<<endl;
	}
};

int main() {
	Manager m (1,"aqsa", "IT",50000,20000.5,2500.75);
	m.calculate();
	Developer d (1000,"aqsa", "IT",50000,20000.5,2500.75,500);
   

	return 0;
	
}