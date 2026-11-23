
#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
    string name;
    int age;
    string gender;

public:
 Human(string name, int age, string gender)
    
    {
    	cout<<"\nParameterized constructor call  ";
        this->name = name;
        this->age = age;
        this->gender = gender;
    }
    void set_details(string name, int age, string gender)
    
    {
    	cout<<"\nNew detail has been set. ";
        this->name = name;
        this->age = age;
        this->gender = gender;
    }
	~Human()
	{
		cout<<"R.I.P::::::::"<<name;
	}

	

    // Method to display details
    void display_detail()
    {
        cout << "\nName   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "Gender : " << gender << endl;
    }
    

};

int main()
{
    Human h("wonder woman",401,"female");//parameterized
    h.display_detail();
    h.set_details("super man",30,"male");
    h.display_detail();
    return 0;
}
