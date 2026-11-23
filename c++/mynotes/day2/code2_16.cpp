#include <iostream>
#include <string>
//Take a line of string. Print the frequency of every alphabet. 
using namespace std;

int main()
{
    string name[]={"aqsa","tina","riya","piya","zulfeen"};
    cout<<"Strings name:";
    for(string i:name)
    	cout<<i<<", ";
    for(int i=0;i<sizeof(name)/sizeof(name[0]);i++)
    	{
    		for(int j=0;j<sizeof(name)/sizeof(name[0])-1;j++)
    		{
    			if(name[j]>name[j+1])
    			{
    			string temp=name[j];
    				name[j]=name[j+1];
    				name[j+1]=temp;
				}
			}
		}
	cout<<"\nSorted Array:";
    for(string i:name)
    	cout<<i<<", ";	
    
    
    return 0;
}
//Accept 10 nums from the user and sort them in ascending order using the above algorithm.
