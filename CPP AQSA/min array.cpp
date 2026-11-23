// max of array, min of array
#include <iostream> 
using namespace std;

int main() {
	int arr[]= {201,10,20,30,1,200};
	
	int length = sizeof(arr) /sizeof(arr[0]);
	int sum=0;
	int min=arr[0];
	int max=arr[0];
	int secondmax=0;
	int secondmin=0;
	int thirdmax=0;
	int even=0;
	int odd=0;
	
	for(int i=0;i<length;i++) {
	sum =sum + arr[i];	

	if(arr[i]<min) {
	    secondmin= min;
	    
		min = arr[i];
	
		}
		else if (arr[i]>max) {
		     thirdmax= secondmax;
		    secondmax= max;
		   
		    max = arr[i];
		}
		
		if (secondmax<arr[i] && arr[i]!=max) {
		     thirdmax = secondmax;
		    secondmax=arr[i];
		}
		
		else if (secondmin>arr[i] &&arr[i]!=min) {
		    secondmin= arr[i];
		}
		if (thirdmax<arr[i] && arr[i]<secondmax && arr[i]!=max && arr[i]!= secondmax) {
		    thirdmax=arr[i];
		}
		
		
		if(arr[i]%2==0) {
		    even= arr[i];
		    cout<<"even " <<even<<endl;
		}
		if(arr[i]%2!=0) {
		    odd= arr[i];
		    cout<<"odd " <<odd<<endl;
		}
	}
	
	    cout<<"Sum: "<<sum<<endl;	
		cout<<"min : "<<min<<endl;	
		cout<<"max : "<<max<<endl;
		cout<<"second max : "<<secondmax<<endl;
		cout<<"second min : "<<secondmin<<endl;
		cout<<"third max : "<<thirdmax<<endl;
		
		
}