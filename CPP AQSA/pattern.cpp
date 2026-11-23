#include<iostream>
using namespace std;

//int main(){
//	int size=5;
//	for(int i=0;i<=size;i++) {
//		for(int j=0; j<=i;j++) {
//			cout<<"*";
//		}
//		cout<<"\n";
//	}
//
//	return 0;
//}

int main()
{
    char a='A';
    for(int space=3,i=1;space>=0,i<=3; space--,i++) {
        for(int s=1; s<=space;s++) {
            cout<<" ";
        }
        for(int j=1;j<=i;j++) {
            cout<<a<<" ";
            a++;
        }
        cout<<"\n";
        }
}
