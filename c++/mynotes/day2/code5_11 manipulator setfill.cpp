#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  
  for(int i=1;i<=5;i++)  
  {
  	cout<<setw(6-i)<<setfill(' ')<<"";
  	cout<<setw(i)<<setfill('x')<<""<<"\n";
  	//               1            X      
  	//               2            XX     
	 //              3            XXX    
  }
    /*cout << left << setw(15) << "Name"
         << setw(10) << "Roll"
         << setw(10) << "Marks" << endl;

    cout << left << setw(15) << name
         << setw(10) << roll
         << fixed << setprecision(2) << marks << endl;
*/
    return 0;
}
