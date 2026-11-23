
#include <iostream>
using namespace std;


int main()
{
    int num;
    cout<<"Enter the integer: ";
    cin>>num;
   	auto compare=[](int num)
			{
				if (num%2==0)
				{
					cout<<"Number is even"<<"\n";
			
				}
					else{
					
					cout<<"number is odd"<<"\n";
				
						}
						return(num);
				};
				
			
    cout<<"The number is "<<num<<endl;
    compare(num);
    return 0;
}
