#include <iostream>
using namespace std;

/*
pointer to function:
Using a pointer concept can call a function. 
As a parameter you can pass a function to another function. 

Like a normal pointer this is also a pointer but would require prototyping with a parameter data type. 

int add(int no1,int no2)
	{
		return (no1+no2);
	}

return type (*pointer) (data type,data type);
int (*p)(int,int);//Created pointer, along with its return type, its identifier, and its parameter type. 
p=add
//call
cout<<"Addition is:"<<p(10,20);



*/
int add(int no1,int no2)
	{
		return (no1+no2);
	}
int main()
{
    int (*p)(int,int);
    p=add;
    cout<<"Addition is:"<<p(10,20);

    return 0;
}
