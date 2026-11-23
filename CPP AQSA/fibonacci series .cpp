#include<iostream> 
using namespace std;
//fibonacci series

int main() {
	int first=0;
	int second =1;
	int next;
	int n;
	cout<<"Enter the number for fibonacci series: ";
	cin>>n;
	
	for (int i=1;i<=n;i++) {
		cout<<first<<" ";
		next= first+second;
		first= second;
		second =next;
	}
	return 0;
}