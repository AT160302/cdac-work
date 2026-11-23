#include<iostream>
using namespace std;
//overload the area function to cal the area of circle and rectangle

float area(float r)

{
	
	return 3.14* r *r;
}

float area(float l,int b)

{
	
	return l*b;
}

int main()

{
	float r,l,b;
	cout<<"enter the radius: ";
    cin>>r;
    cout<<"Area of circle : "<<area(r)<<endl;
    cout<<"enter the length and breadth: ";
    cin>>l>>b;
	cout<<"Area of rectangle: "<<area(l,b)<<endl;
	return 0;
}
