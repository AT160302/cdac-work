#include<iostream>
#include<string>
//We want a given line of string in such a manner that the first character of every word becomes capital. 
//input:hI THIS is IT
//output:Hi This Is It
using namespace std;
int main()
{
	string line;

	cout<<"Enter your line: ";
	getline(cin,line);
    line[0]=toupper(line[0]);
    //for (char i:line)
	for (int i=0; i<line.length();i++)
	{
	if (line[i]==' '){
	
		line[i+1]=toupper(line[i+1]);

		}	
	}
	cout<<"correct line: "<<line;
	//The process in which an `int` can be cast to `char` or `char` can be cast to an integer 

	return 0;
}





















