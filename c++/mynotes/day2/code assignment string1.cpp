#include<iostream>
#include<string>

using namespace std;
int main()
{
	string line;
	cout<<"Enter a line of text: ";
	getline(cin,line);
	
	int alpha=0;
	int capital_alpha=0;
	int digits=0;
	int words=0;
	
	if (line[0] != ' ') {
		words=1;
	}
	
	for(int i =0; i<line.length(); i++) {
		
		if(line[i]>='A'&& line[i]<='Z') {
			capital_alpha++;
			alpha++;
		}
		
		else if(line[i]>='a'&& line[i]<='z') {
			alpha++;
		}
		else if(line[i]>='0'&& line[i]<='9') {
			digits++;
		}
		
		if(line[i] == ' ' ){
			if (i+1<line.length() && line[i+1] != ' ') {
				words++;
			}
		}
	}
	
	cout<<"\nNumber of alphabets: "<<alpha;
	cout<<"\nNumber of capital alphabets: "<<capital_alpha;
	cout<<"\nNumber of digits: "<<digits;		
	cout<<"\nNumber of words: "<<words<<endl;	
	
	return 0;
}
		
		