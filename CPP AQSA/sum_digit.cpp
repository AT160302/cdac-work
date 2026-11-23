#include<iostream> 
using namespace std;
//
//int main() {
//	int num,digit=0;
//	int sum=0;
//	cout<<"Enter the number: ";
//	cin>>num;
//	while(num!=0) {
//		digit=num%10;
//		sum= digit+digit;
//	}
//	
//
//	cout<<"Sum of all digits are: "<<sum;
//	return 0;
//}




int main() {
	int num=0,digit=0;
	int sum=0;
	cout<<"Enter the number: ";
	cin>>num;
	while(num!=0) {
		digit=num%10;
		sum= sum+(pow (digit,3));
		num=num/10;
	
	}
		
	

	cout<<" are: "<<sum;
	return 0;
}







#include<iostream> 
#include <cmath>
using namespace std;

int main() {
	int num=10;
	
// 	cout<<"Enter the number: ";
// 	cin>>num;
// 	while(num!=0) {
// 		if(num/1 ==0&& num/num==0) {
// 		    cout<<"it is prime number"<<num;
		    
// 		}
// 		else
// 		{
// 		    cout<<"it is not";
// 		}
// 		num--;
	
// 	}
if (num<=1) {
    cout<<"it is not prime number"<<num<<endl;
}

else {
    int i;
  

for(int i =num;i>=2;i--) {
    if(num%i==0) {
        
		    break;
    }
    
}
   if(i==num) {
       cout<<"it is a prime"<<num<<endl;
   } 
   else {
       cout<<"it is not prime"<<num<<endl;
   }

	}

	return 0;
}
