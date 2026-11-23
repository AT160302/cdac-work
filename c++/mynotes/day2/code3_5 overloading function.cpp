


//overloading function has same name but different parameter 
// this is normal function call
#include<iostream>
using namespace std;

int square(int n)

{
	return n*n;
}

int calculation(int n)

{
	return square(n);
}

int main()

{
	cout<<calculation(5);
	return 0;
}