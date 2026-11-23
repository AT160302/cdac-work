
#include <iostream>
using namespace std;

inline int square(int num)
	{
		return (num*num);
	}
int main()
{
    int num;
    cout<<"Enter the number: ";
    
	cin>>num;
    cout<<"Square of "<<num<<" = "<<square(num);

    return 0;
}
