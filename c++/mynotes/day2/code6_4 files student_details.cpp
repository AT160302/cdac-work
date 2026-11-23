#include <iostream>
#include <fstream>
//At the end of the file reading print the one who has scored the maximum marks and the one who has scored the minimum marks. 
using namespace std;
int main()
{
ifstream fin("student_details.txt");
if(!fin)//If the file is opened properly then `fin` will hold a reference to the file. 
//otherwise it would be null
{
	cout<<"\nThere was an error in opening the file. ";
}
else
{
	int roll_no,marks,min;
	string name;
	
	while (fin>>roll_no>>name>>marks)//The loop will run till `getline` reaches the end of the file.
	{
	cout <<"\nRoll Number:"<<roll_no<<"\tName:"<<name<<"\tMarks:"<<marks;
	}
	
	
	min(student_details,marks);
	cout <<"\nmin marks is:"<<min<<"\tName:"<<name<<"\tMarks:"<<marks;

	fin.close();
}


return 0;
}
