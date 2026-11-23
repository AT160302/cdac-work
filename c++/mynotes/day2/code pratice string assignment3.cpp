#include <iostream>

using namespace std;

int main() {
	int size =10;
	int a[10];
	int sum = 0;
	double average = 0.0;
	
	cout<<"Enter 10 elements: \n";
	for (int i = 0; i<size;i++) {
		cout<<"Element " <<i+1<<",";
		cin>> a[i];
		sum+= a[i];
	}
	
	average = static_cast<double>(sum)/size;
	
	int count_above=0;
	int count_below=0;
	
	cout<<"\n sum = "<<sum;
	cout<<"\n average = "<<average<<"\n";
	
	cout<<"\n Elements above average: \n";
	for(int i = 0; i<size;i++) {
		if (a[i]>average){
			cout<<a[i] <<" ";
			count_above++;
		}
	}
	cout<<"\n";
	
	cout<<"\n Elements below average: \n";
	for(int i = 0; i<size;i++) {
		if (a[i]<average){
			cout<<a[i] <<" ";
			count_below++;
		}
	}
	cout<<"\n";
	
	cout<<"\n Number of element above average: "<<count_above;
	cout<<"\n Number of element above average: "<<count_below<<endl;
	
	return 0;
	
}