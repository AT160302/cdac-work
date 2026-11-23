/*


//string - Reverse a string.

#include <iostream>
#include <string>
using namespace std;

int main() {

string name;
cout<<"\nEnter the name: ";
getline(cin,name);
cout<<name.length()<<endl;

//to reverse the string 
for (int i=(name.length()-1);i>=0;i--)
{
	cout<<name[i];
}

return 0;
}

*/




//Check if a string is a palindrome.



/*

#include <iostream>
#include<string>
using namespace std;

int main() {

string name;
//int length= name.length()-1;
cout<<"\nEnter the name: ";
getline(cin,name);
cout<<name.length()<<endl;
int length= name.length()-1;

bool ispalindrome = true;

for (int i=0;i<=length/2;i++)
{

	
		if (name[i]!=name[length-i])
		{
			ispalindrome = false;
			break;
			//getline(cin,name);
		}
		
}
if( ispalindrome) 
	{
		cout<<" string is palindrome: ";
	}
	else 
	{
		cout<<" string is not palindrome: ";
	}

return 0;
}


*/

/*

//Count the vowels in a string.


#include <iostream>
#include<string>
using namespace std;

int main() {

string name;
cout<<"Enter the name: ";

getline(cin, name);

int length= name.length()-1;
cout<<"length of string is : "<<length;


int count=0;

for(int i=0;i<=length;i++)
{
	char ch= tolower(name[i]);
	if(ch =='a' || ch=='e'||ch=='i'|| ch=='o' || ch=='u')
	{
		count++;
		
	}
}

cout<<" total number of vovels in the string is : "<<count<<endl;


return 0;

}

*/


/*

//Remove duplicates from a string


#include <iostream>
#include <string>

using namespace std;

int main() {

string name;
cout<<"Enter the name: ";
cin>>name;

int length= name.length()-1;
cout<<" the length of string is : "<<length<<endl;

string new_name= "";
int length1= name.length()-1;
//cout<<" the length of string is : "<<length1<<endl;

for (int i=0; i<=length;i++)
	{
		char ch= tolower(name[i]);
		bool isduplicate= false;
		
		
		for (int j=0;j<i;j++)
		{
			if(tolower(name[j]==ch)) {
			
			isduplicate= true;
			break;
			}
		}
		if (!isduplicate) {
			new_name+=name[i];
		}
	}
	
	cout<<" new name without duplication: "<<new_name<<endl;
	
	return 0;
}

*/


//Check if two strings are anagrams.


#include<iostream>
#include <string>

using namespace std;

int main(){

string name1;
string name2;
cout<<"enter the name1: ";
cin>>name1;
cout<<"enter the name2: ";
cin>>name2;

string org_name2= name2;


int length= name1.length()-1;
int length2= name2.length()-1;

bool total_anagrams = true;

if (length!=length2) {

total_anagrams= false;
}
else 
{
	for (int i=0;i<=length;i++)
		{
		char ch= tolower(name1[i]);
		bool isanagrams= false;
			for (int j=0;j<=length2;j++)
			{
				if (ch==tolower(name2[j])) {
					isanagrams= true;
					
					name2[j]=  ' ';
					break;
				}	
			}
			if (isanagrams== false) {
			total_anagrams=	false;
			break;
			}
			
			
		}
		

}		
if (total_anagrams){
		
		cout<<name1<<" is an anagrams of "<<org_name2<<"\n";
		}
		else {
			cout<<"they are not anagrams" <<endl;
	
		}
	
		return 0;


}











