
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
	string word,rword="";
	cout<<"enter word: ";
	cin>>word;

	for(int i=word.length()-1;i>=0;i--)

	{ 	
	rword+=word[i];
	}
	if(word==rword)
	
		cout<<endl<<word<<"is palindrome";
		else
		cout<<endl<<word<<"is not palindrome";
		
	return 0;
}
