#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n =5;
  cout<<setw(5) <<right << "X";
   //cout<<setw(5) << setfill(' ') << "X";

  for(int i=1;i<=n;i++)  
  {
  		cout<<"\n"<<setw(i)<<setfill(' ')<<"X";
	}
  	cout<<setw(5) <<right<<"XXXXX";
  return 0;
}