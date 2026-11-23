//Celsius to Fahrenheit

#include <iostream>
using namespace std;

int main(){
	float temp_in_celsius;
	float temp_in_fahrenheit;
	cout<<"Enter the temperature in celsius: \n";
	cin>>temp_in_celsius;
	temp_in_fahrenheit = (temp_in_celsius*9/5)+32;
	cout<<"Temperature in Fahrenheit is: "<<temp_in_fahrenheit;
	return 0;

}