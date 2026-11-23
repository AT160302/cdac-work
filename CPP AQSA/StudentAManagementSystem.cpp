#include<iostream> 
using namespace std;

class Student {
	
	string name;
	int rollno;
	int marks1,marks2, marks3, total=0;
	int avg;
	string status;

public:	
//	Student(string name, int rollno,int marks1,int marks2,int marks3) {
//		this->name=name;
//		this->rollno=rollno;
//		this->marks1=marks1;
//		this->marks2=marks2;
//		this->marks3=marks3;
//				
//	}
	
	void set_details(string name, int rollno,int marks1,int marks2,int marks3) {
	    this->name=name;
		this->rollno=rollno;
		this->marks1=marks1;
		this->marks2=marks2;
		this->marks3=marks3;
	}
	void display_details() {
		
		cout<<"rollno: "<<rollno<<endl;
		cout<<"name: "<<name<<endl;
		cout<<"marks1: "<<marks1<<endl;
		cout<<"marks2: "<<marks2<<endl;
		cout<<"marks3: "<<marks3<<endl;
//		cout<<"total"<<total;
		
		total= marks1+marks2+marks3;
		avg= total/3;
		cout<<"total: "<<total<<endl;
		cout<<"avg: "<<avg<<endl;
//		cout<<"Status of passing: "<<status<<endl;	
	}
	
	void passing() {
		if (marks1>50 && marks2>50 && marks3>50) {
			cout<<"student is passed in all subject "<<endl;
		}
		else {
			cout<<"student is failed one of the subject "<<endl;
		}
	}
};

int main() {
	Student s;
	s.set_details("aqsa", 1,70,20,90);
	s.display_details();
	s.passing();
	
}
