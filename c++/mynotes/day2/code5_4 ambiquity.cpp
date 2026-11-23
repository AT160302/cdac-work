
//Ambiguity resolution. 
#include <iostream>
using namespace std;

class Father
{
public:
    void life()
    {
        cout << "Father teaches life." << endl;
    }

//public:
void eat()
    {
        cout << "father eat non veg." << endl;
    }
};
class Mother
{
public:
    void love()
    {
        cout << "Mother teaches love." << endl;
    }

//public:
void eat()
    {
        cout << "Mother eat only veg." << endl;
    }
};

class Child : public Father, public Mother
{
	public:
	void eat()
	{
		Father::eat();
		Mother::eat(); // this is from mother 
		//cout<<"I eat chinese and ....."<<Mother::eat();
		cout<<"I eat chinese .....";  //this is for myself
	}
};

int main()
{
    Child c;

    c.life();   // Father
    c.love();   // Mother
	c.eat();  //ambiquity 
    return 0;
}

