#include<iostream>
#include<string>
using namespace std;
//Create a class named Calculator that performs four basic
//arithmetic operations:
class calculator
{
public:


int add(int no1, int no2)
{
	return no1 + no2;
}

int sub(int no1, int no2)
{
	return no1-no2;
}

int multi(int no1, int no2)
{
	return no1*no2;
}
int division(int no1, int no2)
{
	return no1/no2;
}
};
int main()

{
	int num1, num2;
	cout<<" enter the first two digit: ";
	cin>>num1>>num2;
	calculator c;
	int result = c.add(num1,num2);
	int result1 = c.sub(num1,num2);
	int result2 = c.multi(num1,num2);
	int result3 = c.division(num1,num2);

	cout<<" \nAddition = "<< result;
	cout<<" \nSubstraction = "<< result1;
	cout<<" \nMultiplication = "<< result2;
	cout<<" \nDivision "<< result3;
	return 0;
}
