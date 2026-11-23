//Area of a Triangle

#include <iostream>
using namespace std;

int main(){
	float base;
	float height;
	float area_of_a_triangle;
	cout<<"Enter the base of a triangle: \n";
	cin>>base;
	cout<<"Enter the height of a triangle: \n";
	cin>>height;
	area_of_a_triangle = 0.5*base*height;
	cout<<"Area of a triangle: "<<area_of_a_triangle;
	return 0;
}