
//Use this code and logic to create a reverse word from a user-entered word. 
//User enters world—>dlrow


#include<iostream>
#include<string>
//use of +
using namespace std;
int main()
{
/*	string word1,word2,word3;
	word1="am";
	word2="ar";
	word3=word1+word2;//The `+` symbol is used to concat one string to another. 
	cout<<word3;*/
	string s1="",s2="abcdefgh";
	for(char c:s2)
	{
		s1+=c;
		cout<<s1<<"\n";
	}
	return 0;
}
