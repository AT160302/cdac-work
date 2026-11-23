//Student Grade Calculator

#include <iostream>
using namespace std;

int main(){
	float marks;	
	cout<<"Enter the marks: ";
	cin>>marks;
	if(marks>=90 && marks<=100){
		cout<<"Grade A";
	}
	else if (marks>=75 && marks<90) {
		cout<<"Grade B";
	}
	else if (marks>=60 && marks<75) {
		cout<<"Grade C";
	}
	else if (marks>=40 && marks<60) {
		cout<<"Grade D";
	}
	else if(marks<40 && marks>=0) {
		cout<<"Grade F";
	}
	else {
		cout<<"Invalid marks";
	}
	return 0;
}