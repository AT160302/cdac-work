#include<iostream>
#include<string>
using namespace std;
class student{
	public:
		string name;
		int roll_no;
		float eng_marks, maths_marks, science_marks;

float total_marks()
{
 
 return eng_marks+maths_marks+science_marks;
}

float percentage()

{
	return (total_marks()/300)*100;
}

void display()
{
	cout<<"\nstudent_name: "<<name;
	cout<<"\nroll no: "<<roll_no;
	cout<<"\ntotal marks: "<<total_marks();
	cout<<"\ntotal percentage"<<percentage()<<"%"<<endl;
}

};

int main()

{
	student s[3];

	
	for (int i=0;i<3;i++)
	{
	cout<<"\n Enter the student name: ";
	getline(cin, s[i].name);
	
	cout<<"\nEnter the roll no: ";
	cin>>s[i].roll_no;
	cout<<"Enter the marks: ";
	cin>>s[i].eng_marks>>s[i].maths_marks>>s[i].science_marks;
	cin.ignore();
		
	}
	for (int i=0;i<3;i++)
	{
		s[i].display();
	}

	
	return 0;
}