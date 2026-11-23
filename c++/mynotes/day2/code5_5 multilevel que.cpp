#include <iostream>
using namespace std;

class human
{
	public:
		string name;
		string gender;
		
	//void human_detail(string)
	
	void showhuman() {
	
		cout<<"name : "<<name<<"\ngender: "<<gender;
	}
	
};

class student : public human {
	public:
		string degree;
		
	void showstudent() {
	

		cout<<"\ndegree : "<<degree;
	}
};


class employee : public student {
	public:
		float salary;
	
	void showsalary() {
	
		cout<<"\nsalary : "<<salary;
	}
};


int main()
{
	employee e;
	e.name="aqsa";
	e.degree="cs";
	e.salary= 100000;
	
	e.showhuman();
    e.showstudent();
    e.showsalary();
    
    return 0;
	
}