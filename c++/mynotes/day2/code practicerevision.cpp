#include <iostream>
#include <string>
using namespace std;

class student
{
	private:
		string name;
		double  *cgpaptr;
	public:
		student (string name, double cgpa) {
		
			this-> name= name;
			cgpaptr= new double;
			*cgpaptr= cgpa;
		}
		
		
		student(student &s){
			this->name= s.name;
			cgpaptr= new double;
		//	this->cgpaptr = s.cgpaptr;
			*cgpaptr= *(s.cgpaptr);
		}
		~student(){
			delete cgpaptr;
		}
	
		void cgpaptr_value(double *cgptr)
		{
			*cgpaptr= cgpa;
		}
		
		
		void accept(){
			cout<<"name: "<<name<<"\n";
			cout<<"cgpa: "<<*cgpaptr<<"\n";
		}
};

int main()
{
	student s1("aqsa",8.99);
	student s2(s1);
	//student s2("riya",9.9);
	
	s1.accept();
	s2.cgpaptr_value()= 9.9;
	s1.accept();
	return 0;
	
	
}



