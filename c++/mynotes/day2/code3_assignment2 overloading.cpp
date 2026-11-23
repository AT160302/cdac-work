#include<iostream>
using namespace std;
class display{
public:
void show(int n1)
{
	cout<<"\nInterger values: "<<n1;
}
void show(double n2)
{
	cout<<"\ndouble values: "<<n2;
}
void show(char n3)
{
	cout<<"\nCharacter value: "<<n3;
}
};

int main()
{
	int n11=0;
	double n22=0;
	char n33=0;
	cout<<"\nEnter the input: ";
	cin>>n11>>n22>>n33;
	
	display d;
	
	d.show(n11);
	d.show(n22);
	d.show(n33);
	
	
	cout<<"\nEnd in main part";\
   return 0;
}
