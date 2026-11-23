//Find the maximum of two numbers and minimum of two numbers
#include<iostream>

using namespace std;


/*

//Find the maximum of two numbers and minimum of two numbers

int main() 
{
	int no1, no2;
	cout<<"Enter the two numbers: ";
	cin>>no1>>no2;
	if( no1>no2)
	{
		cout<<" minimum : "<<no2;
	}
	else
	{
		cout<<" maximum : "<<no1;	
	}
}


*/





/*

//Check if a number is even or odd.

int main() {

int num;
cout<<"\nEnter the number: ";
cin>>num;
if (num%2==0) {
	cout<<" \nnumber is even";
}
else {

	cout<<"\nnumber is odd";
}

return 0;
}

*/


//Calculate the factorial of a number.
int main(){
	int num, i;
	int result=1;
	cout<<"Enter the number for factorial: ";
	cin>>num;
	
	for (i=1;i<=num;i++) {

	result = result*i;
	
	//cin>>result;
}
cout<<num<<"! = "<<result;

return 0;
}






