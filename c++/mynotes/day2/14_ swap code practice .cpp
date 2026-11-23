#include<iostream>
#include<vector>

using namespace std;

int main(){

int n;
cout<<"Enter the number of array: ";
cin>>n;
vector< int >a(n);
//cin>>a[n];

// taking input for array
for(int i=0;i<n;i++)
{
	cout<<"\nEnter the element: ";
	cin>>a[i];
	
}

cout<<"Original array"<<endl;

// printing array
for(int i=0;i<n;i++)
{
	cout<<a[i]<<" ";
	//cin>>a[i];
	
}



// for taking the input to swap 
int left= 0;
int right = n-1;

for(int i=0;i<n;i++){


while (left<right) {

	swap(a[left],a[right]);
	left++;
	right--;
}

}
	cout<<"\nSwapped array"<<endl;
	//for printing the output of swap
for (int i =0; i<=n-1;i++)
	{

	cout<<a[i]<<" ";
	
	}



return 0;

}