#include <iostream>
using namespace std;

int sum_natural_values(int num)
{
	if(num==1){
	
		return 1;
	}
	return num + sum_natural_values(num-1);
	
}
int main() 
{
	int n;
	cout<<"Enter number:\n";
	cin>>n;
	
	if(n<1) {
		cout<<"Enter proper number: "<<"\n";
		return 0;
	}
	
	int total_sum= sum_natural_values(n);
	
	cout<<"\n Sum of natural numbers from 1 to "<<n<<" = "<<total_sum<<"\n";
	return 0;

}

