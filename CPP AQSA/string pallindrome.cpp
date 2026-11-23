#include <iostream> 
using namespace std;

//string pallindrome

int main() {
	string name;
	cout<<"Enter the name : ";
	cin>>name;
    string name1=" ";
	string name2= " ";
	int length=name.length();
	
	for(int i=0;i<length/2;i++) {
	    name1=name1+name[i];
	}
	for(int j=length-1;j>=(length+1)/2;j--) {
	    name2=name2+name[j];
	}
	
	if (name1==name2) {
	    cout<<"it is a pallindrome: ";
	}
    else {
	    cout<<"it is not a pallindrome: ";
	}
     return 0;
	
}
