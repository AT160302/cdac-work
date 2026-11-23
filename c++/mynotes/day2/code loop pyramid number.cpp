/*


#include<iostream>

using namespace std;

int main(){
	
int n=5;

for(int i=0; i<n; i++)         // for each line
{
	//cout<<" ";
	for (int k=1; k<n-i;k++)   // for space 
	{
		cout<<" ";
	}
	for(int j=0;j<i+1;j++)    // for printing numbers
	{
		cout<<" "<<i+1;
	//	for(int k=n;k>i;k++)
		//{
	//		cout<<""<<k;
		//}
	}
	cout<<" "<<endl;
}

return 0;
}

*/


/*

#include <iostream>

//1234
//1234
//1234
//1234


using namespace std;

int main() {
	int n=4;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=1; j<=n;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}

*/

/*
#include <iostream>

//xxxx
//1234
//1234
//1234


using namespace std;

int main() {
	int n=4;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<"x";
		}
		cout<<endl;
	}
	return 0;
}

*/


/*

#include <iostream>


//xxxx
//xxxx
//xxxx
//xxxx


using namespace std;

int main() {
	int n=4;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n-1;j++)
		{
			cout<<"A";
		}
	}
return 0;
}

*/

/*

#include <iostream>

using namespace std;

int main() {
	
	for (int i=0; i<=5; i++)
	{
		
		for(int j=0; j<i; j++)
		{
			cout<<"*";
		}
		//cout<<"";
		cout<<endl;
	}
	return 0;
}

*/

/*


//reverse triangle number
#include <iostream>
//1
//21
//321
//4321


using namespace std;

int main()

{
	int n =5;
	for (int i=0; i<n; i++)
	{
		cout<<" ";
		for (int j=i+1;j>0; j--)
		{
			cout<<j;
		}
		cout<<" "<<endl;
	}
	return 0;
}

*/

/*

#include <iostream>

using namespace std;
//floyd's traingle
//1
//23
//456

int main(){

int n=5;
int num=1;

for(int i=0;i<n;i++)
{
	for(int j=0;j<i+1;j++)
	{
		cout<<" "<<num;
		num++;
	}
	cout<<endl;
}
return 0;
}

*/

/*

#include <iostream>

using namespace std;
//floyd's traingle
//A
//BA
//CBA

int main(){

int n=5;
char alpha= 'A';

	for (int i=0; i<n; i++)
	{
		cout<<" ";
		for (int j=0;j<i+1; j++)
		{
			
			cout<<alpha;
			alpha++;
		}
		cout<<" "<<endl;
	}
	return 0;
}

*/

/*

//reverse triangle number
#include <iostream>
//A
//BA
//CBA



using namespace std;

int main()

{
	int n =5;
	char ch='A';
	for (int i=0; i<n; i++)
	{
		cout<<" ";
		for (int j=i+1;j>0; j--)
		{
			cout<<ch;
			ch++;
		}
		cout<<" "<<endl;
	}
	return 0;
}

////////////////////////////////////////////////////////////////

*/

/*

#include <iostream>
//1111
// 222
//  33
//   4



using namespace std;

int main()

{
	int n =5;
	
	for (int i=0; i<n; i++)
	{
		for (int j=0;j<i; j++)
		{
			cout<<" ";
		}
		for (int k=0;k<n-i;k++)
			{
				cout<<i+1;
			}
		
		cout<<" "<<endl;
	}
	return 0;
}

*/


/*
#include <iostream>
//1111
// 222
//  33
//   4



using namespace std;

int main()

{
	int n =5;
	char ch='A';
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<i; j++)
		{
			cout<<" ";
		}
		for (int k=0; k<n-i; k++)
			{
				cout<<ch+1;
				//ch++;
			}
		
		cout<<" "<<endl;
	}
	return 0;
}

/////////////////////////////////////////////////////////

*/

/*

#include <iostream>
//   1
//  121
// 12321
//



using namespace std;

int main()

{
	int n =4;
	
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n-i-1; j++)
		{
			cout<<" ";
		}
		for (int k=1; k<=i+1; k++)
			{
				cout<<k;
			}
			for(int j=i;j>=1;j--){
				cout<<j;
		
			}
			
		
		cout<<endl;
	}
	return 0;
}


*/


#include <iostream>
//   hallow diamond
//  121
// 12321
//



using namespace std;

int main()

{
	int n =4;
	
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n-i-1; j++)    //for space
		{
			cout<<" ";
		}
		cout<<"*";
		
		if (i!=0) {		
			for (int j=0; j<=2*i-1; j++)  //spaces
			{
				cout<<" ";
			}
				cout<<"*";	
		}
			
		
		cout<<endl;
	}
	return 0;
}




