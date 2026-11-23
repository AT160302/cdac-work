#include <iostream> 
using namespace std;

//reverse string

int main() {
	string name;
	cout<<"Enter the name : ";
	cin>>name;
	string reverse= " ";
	int length= name.length();

		for(int j=length;j>=0;j--) {
			reverse=reverse+ name[j];
		}
		cout<<reverse;
		return 0;

	
}