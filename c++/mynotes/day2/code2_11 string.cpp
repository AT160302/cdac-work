//Count vowels. 
#include<iostream>
#include<string>
//vowels:a e i o u
using namespace std;
int main()
{
	string line;
	int count=0;
	int c;
	cout<<"Enter a line:";
	getline(cin,line);
	cout<<"which character you want to see: ";
	cin>>c;
	//count vowel
	for(char i:line)
	{
		if(i==c)
			count++;
	}

	cout<<"\nTotal times repeated:"<<count;
	return 0;
}

//Use the above program logic to count the frequency of a character given by the user. 


