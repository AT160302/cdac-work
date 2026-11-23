#include <iostream>
using namespace std;

class Address
{
    // write data members
    public:
    	string city;
    	
    

public:
    // write input method
	void Address(){
    		cout<<" the address is ";
    		cin>>addresses;
		}
    // write display method
};

class Student
{
	public:
    	string name;
    	int roll_no;
    	
    // write student data members
	public:
    Address a;   // HAS-A relationship
    

public:
    // write input method
    void student_detail()
	{
		a.address();
		cout<<"\nstudent is ";
	}

void display()
	{
		cout<<"the address is : "<<address;
		cout <<"the student is : "<<student;
	}

    // write display method
};

int main()
{
    Student s;

s.student_detail= "aqsa";
s.address ="pune";
    // accept details
    // display details

    return 0;
}

