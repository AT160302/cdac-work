#include <iostream>
#include <string>

using namespace std;

class Student 
{
	public: 
	int rollNo, marks1, marks2, marks3, total, average;
	string Name;
	
	//copy parametrized constructor
		Student(int rollNo, string Name, int marks1, int marks2, int marks3 ) {
			this->rollNo = rollNo;
			this->Name = Name;
			this->marks1 = marks1;
			this->marks2 = marks2;
			this->marks3 = marks3;
		}
		
	// function method to display data
	void display_student_details () 
	{
		cout<<"\nName: " <<Name<<endl;
		cout<<"\nRoll no: " <<rollNo<<endl;
		cout<<"\nMarks1: " <<marks1<<endl;
		cout<<"\nMarks2: " <<marks2<<endl;
		cout<<"\nMarks3: " <<marks3<<endl;
		cout<<"\nTotal: " <<total<<endl;
		cout<<"\nAverage: " <<average<<endl;
		
	}
	void calculate() {
		total = marks1 + marks2 +marks3;
	
		average = total/3;
	}
	

	
	
	
};


int main() {
	Student s(1, "Aqsa", 80,76,80);
	s.calculate();
	s.display_student_details();

	
	return 0;
	
}