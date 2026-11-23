// reserve a number the foll formula to reverse a number and 
//compare the original one and tell if it is a armstrong number


#include<iostream>


using namespace std;
int main()

{
	int number,temp_number,r_temp_number=0,digit;
	cout<<"Enter a number:";
	cin>>number;
	temp_number=number; //copy
	
	
	while(temp_number>0)
	{
		digit=temp_number%10;
		
		//sum=sum
		r_temp_number= r_temp_number*10+digit;
		temp_number=temp_number/10;
	}
	
		if (number==r_temp_number){
			cout<<"then it is a palindrome number \n";
		}
		else
		{
			cout<<"then it is not a palindrome number \n";
		}

	return 0;
}


