#include<iostream>
using namespace std;
int main()
{
	
	int r,c;
	int grand_total=0;
	cout<<"Enter r:";
	cin>>r;
	//Initialize all elements of the array to zero. 
	//input n elements
	cout<<"Enter c: ";
	cin>>c;
	int a[r][c]; 
	
	int row_sum[r];
	int col_sum[c];
	for(int i=0;i<r;i++) row_sum[i]=0;
	for(int i=0;i<c;i++) col_sum[i]=0;
	
	cout<<"Enter matrix element \n";
		for(int index_r=0;index_r<r;index_r++)
	{
		for(int index_c=0;index_c<c;index_c++){
		
		cout<<"\n Enter at a["<<index_r<<"]["<<index_c<< "]:";
		cin>>a[index_r][index_c];
		}
	}


	//for both row and colum addition
	for(int r1=0;r1<r;r1++)
	{
		for(int c1=0;c1<c;c1++)
		{
			
			row_sum[r1]+= a[r1][c1];
			col_sum[c1]+= a[r1][c1];
			grand_total +=a[r1][c1];
			
		}
		
	}	
	cout<<"\n Matrix of a with sums:\n";
	for(int index_r=0;index_r<r;index_r++)
	{
		for(int index_c=0;index_c<c;index_c++){
		cout<<a[index_r][index_c]<<"\t";
		}
		cout<<row_sum[index_r]<<"\n";
	}
	
	cout<<"--------------------------------------\n";
		for(int c1=0;c1<c;c1++){
			cout<<col_sum[c1]<<"\t";
			}
	cout<<grand_total<<"\n";
	
	cout<<"\nThe grand total is: "<<grand_total;
		
	cout<<endl; 

	
	return 0;
}
