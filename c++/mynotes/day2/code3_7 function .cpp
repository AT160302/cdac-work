#include<iostream>
#include<string>
using namespace std;
/*The name parameter should be mandatory.
The nationality parameter should have a default value of "Indian".
If the user provides only the name, the function should display the name along with the default nationality.
*/

void info(string name, string nationality = "Indian")

{
	cout<<"name: "<<name<<endl;
	cout<<"nationality: "<<nationality<<endl;

}


int main()

{
	//cout<<" enter the name and nationailty: ";
	info("aqsa");
	info(" zulfeen","American"); 
//	cout<<" name and nationality is : "<< name<<nationality;
	return 0;
}
