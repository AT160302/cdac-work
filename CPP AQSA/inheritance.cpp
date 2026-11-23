#include<iostream> 
using namespace std;

class Employee {
	public: 
	int employeeId;
	string name;
	
	private:
	float salary;
	
	public: 
	Employee (int employeeId, string name,float salary) {
		this->employeeId= employeeId;
		this->name= name;
		this->salary= salary;
		cout<<"Employee id: "<<employeeId;
		cout<<"Name: "<<name;
		cout<<"salary: "<<salary;
	}
	
};

class Manager : private Employee{
	public:
	string department;
	float bonus;
	
	

	
	public:
	Manager (int employeeId, string name, string department,float bonus, float salary) : Employee(employeeId, name, salary){
		this->department=department;
		cout<<"Department: "<<department<<endl;
	}
	
	void calculate() {
	   int totalsal= salary+bonus;
	   cout<<totalsal<<endl;
	}
};

int main() {
	Manager m (1,"aqsa", "IT", 50000);
//	m.display();
	return 0;
	
}