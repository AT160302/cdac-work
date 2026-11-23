#include<iostream>
#include<string>
using namespace std;


class Human{
	private:
		
	string name;
	int age;
	string gender;
	
	public:
	void set_detail(string name, int age, string gender)
	{
		this->name = name;
		this->age = age;
		this->gender= gender;
		
	}
	
	void display_detail(){
		cout<<"name "<<name<<"\n"<<"age "<<age<<"\n"<<"gender "<<gender<<"\n";
		
	}
	void can_vote()
    {
        if (age >= 18)
        {
            cout << "\nYes, you can vote." << endl;
        }
        else
        {
            cout << "\nYou cannot vote." << endl;
        }
    }
};

	

int main(){

	
	Human h;
	
	h.set_detail("aqsa",20,"female");
	h.display_detail();
	h.can_vote();
	

	return 0;
}







