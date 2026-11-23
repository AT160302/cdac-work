#include <iostream> 
using namespace std;

//Create two objects and use a friend function to compare their private data.
class Number {
	private: 
	int value;
	
	public: 
	Number(int v) {
		value=v;
	}
	friend void compare(Number n1,Number n2);
};
void compare(Number n1,Number n2) {
	if(n1.value>n2.value) {
		cout<<"number1 is greater"<<endl;
	}
	else {
		cout<<"number2 is greater"<<endl; 
	}
}

int main() {
	Number n1(10);
	Number n2(20);
	
	compare(n1,n2);
	
	return 0;
}