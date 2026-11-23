

/*Write a C++ program to accept the elements of a from the user.

The program should display the matrix in such a way that:

The is displayed next to that row.

The is displayed below the corresponding column.

The of all matrix elements should also be displayed.   */

#include<iostream>

using namespace std;
int main()
{
	
	int rows=2,columns=3;
	int m[2][3]={{10,20,30},{1,2,3}};
	//In a static array one must declare the number of columns. 
	//The row will be picked up automatically. 
	//printing
	cout<<"\n Matrix has:\n";
	for(int r=0;r<rows;r++)
	{
	  for(int c=0;c<columns;c++)
		{
			cout<<m[r][c]<<"\t";
		}
		cout<<endl;//In order to move to the next line 
	}

	cout<<"\n Matrix has:\n";

	//for row addition
	for(int r=0;r<rows;r++)
	{
		int sum_row=0;
	  for(int c=0;c<columns;c++)
		{
			
			cout<<m[r][c] <<"\t";
			sum_row+=m[r][c];
		}
		
		cout<<"total sum of row : "<<sum_row;
		cout<<endl;//In order to move to the next line 
	}
	cout<<"\n Matrix has:\n";
	//for colum addition
	
	 for(int c=0;c<columns;c++)
	{
		int sum_col=0;
	 for(int r=0;r<rows;r++)
		{
			
			cout<<m[r][c] <<"\t";
			sum_col+=m[r][c];
		}
		
		//cout<<"total sum of col : "<<sum_col;
		cout<<sum_col;
		cout<<endl;//In order to move to the next line 
	}
	
	cout<<"\n Matrix has:\n";
	//col and row
	for(int c=0;c<columns;c++)
		int sum_col=0;
	for(int r=0;r<rows;r++)
	{
	
		int sum_row=0;
	
			cout<<m[r][c] <<"\t";
			sum_row+=m[r][c];
		}
		sum_col+=m[r][c];
		
		//cout<<"total sum of row : "<<sum;
		cout<<endl;//In order to move to the next line 

	return 0;
}
