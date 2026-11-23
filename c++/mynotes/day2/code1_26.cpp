//abcde
//abcd
//abc
//ab
//a
//ab
//abc
//abcd
//abcde

#include<iostream>

using namespace std;

int main()
{
	int start, end;
	cout<<"Enter the start: ";
	cin>>start;

	cout<<"Enter the end: ";
	cin>>end;
	if (start<end){
	
		for(int i=start;i<=end;i++)
		{
			cout<<i<<" ";
		}
	}
	else {
		for(int i=start;i>=end;i--)
			cout<<i<<" ";
	}
	return 0;
}
	
	
	
/*	for(char i='a';i<='e';i++)
	{
		for(char j='a';j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
*/