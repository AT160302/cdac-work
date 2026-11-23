#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream fin("career.txt");
if (!fin)
{
	cout<<"\n there was some error in opening files";

}
else {

	string line;
	while (getline(fin, line))
	{
		cout << line << '\n';
	}
	fin.close();
}
return 0;
}