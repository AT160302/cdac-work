
//Create a function called `area` which will accept a radius and print the area of a circle. 

#include<iostream>
using namespace std;
//The function will accept the arguments via the parameters, 
//perform the necessary processing, 
//and print the final result. 
void area(float r,float pi=3.14)//stored in n1-->no1   n2--->no2
{
	//no1,no2:1. Local copy of data kept only within the function when the function is over
	//cout<<"\naddress of no1 and no2 "<<&no1<<","<<&no2;
	cout<<"\n Area of cirle is : "<<r<<"*"<<r<<"*"<<pi<<"="<<(r*r*pi);
}

int main()
{
//The job of reading data and passing it to the function is done by the main script. The actual processing of the data and the result printing are done by the function. 
   int r;
   //int area;
   //const float pi= 3.14;
   cout<<"Enter the radius. \n";
   cin>>r;  
   //cout<<"\narea of circle: "<<r<<","<<pi;
   area(r);//pass by value
   return 0;
}