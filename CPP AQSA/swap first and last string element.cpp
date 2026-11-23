#include <iostream> 
using namespace std;

// swap first and last element

int main() {
	string name;
	cout<<"Enter the name : ";
	cin>>name;
   
   char temp= name[0];
   name[0]= name[name.length()-1];
   name[name.length()-1]= temp;
   cout<<name;
   
     return 0;
	
}
