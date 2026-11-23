

/*Write a C++ program to accept the elements of a from the user.

The program should display the matrix in such a way that:

The is displayed next to that row.

The is displayed below the corresponding column.

The of all matrix elements should also be displayed.   */

#include<iostream>

using namespace std;
int main()
{
	
	int rows,columns;
	
	int grand_total=0;
	cout<<"Enter the row: ";
	cin>>rows;
	cout<<"Enter the column: ";
	cin>>columns;
	//cin>>m[rows][colums];
	int m[rows][columns];
	int row_sum[rows], col_sum[columns];
	

	
	cout<<"Enter the numbers in maxtrix: \n";
	for(int r=0;r<rows;r++)
	{
	  for(int c=0;c<columns;c++)
		{
			cout<<"numbers [" <<r<<"]["<<c"]:";
			cin>>m[r][c];
		}
		cout<<endl;//In order to move to the next line 
	}

	cout<<"\n Matrix has:\n";

	//for both row and colum addition
	for(int r=0;r<rows;r++)
	{
		for(int c=0;c<columns;c++)
		{
			
			cout<<m[r][c]<<"\t";
			
			row_sum[r]+= m[r][c];
			col_sum[c]+= m[r][c];
			grand_total +=m[r][c];
			
		}
		cout<<row_sum[r]<<"\n";
		
	}
	
	cout<<"--------------------------------------\n";
		for(int c=0;c<columns;c++){
			cout<<col_sum[c]<<"\t";
			}
	cout<<grand_total<<"\n";
	
	cout<<"\nThe grand total is: "<<grand_total;
		
	cout<<endl; 

	return 0;
}
