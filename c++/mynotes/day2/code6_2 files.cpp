//files
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ofstream fout("career.txt");
fout << "101 Amar 90\n";
fout << "102 Riya 95\n";
fout.close();
cout << "Data written successfully.";
return 0;
}
