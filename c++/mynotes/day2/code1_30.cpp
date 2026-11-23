#include<iostream>
#include<string>
// 
using namespace std;
int main()
{
	string product_name;
	int actual_price, guess_price,counter=0;

	cout<<"Enter the product name: ";
	cin>>product_name;
	cout<<"Enter the product price : ";
	cin>>actual_price;
	
	while(true)
	{
		cout<<"\nenter the guess price: ";
		cin>>guess_price;
		if ( guess_price> actual_price){
			cout<<"\nYour guess is more\n";
			counter++;
		}
		else if (guess_price< actual_price){
			cout<<"\nYour guess is less\n";
			counter++;
		}
		else {
		
		cout<<"\nYour guess is correct\n";
		cout<<"\nthe total guess you took: "<<counter<<" to guess it right";
		break;
			}
	}
	return 0;
}