#include<iostream>
#include<string>

using namespace std;


class Student
{
    public:
	static int count;
	int roll_no;
	string name, gender;
public:
	
	//create a register_student method
	//which will accept name and gender from
	//print on screen"student successfullu... and auto genertaed roll no"
	

  /*  Student()
    {
        count++;
        this->name= name;
        this->gender= gender;
        roll_no=count;
        cout<<"\nNew student registered with roll no:"<<roll_no;
    }
    
    */
    void register_student(string name, string gender,int roll_no)
    {
        count++;
        this->name= name;
        this->gender= gender;
        roll_no=count;
        cout<<"\nNew student registered with roll no:"<<roll_no;
    }
    
    void display_student()
    	{
    		cout<<" \n roll no:"<< roll_no<<"\tname "<<name<<"\ngender: "<<gender;
		}
		
		// get_count(): will return total number of students created so far
		int get_cout()
		{
			return(count);
		}
		//get roll no return private data that is roll no to outside the main method
			int get_roll()
		{
			return(roll_no);
		}

    static void showCount()//Static function member :Can only access static data, nothing other than that. 
    {
        cout << "Total count till now is: " << count << endl;
        //Within the class we can directly write `count` or `class_name::count`. 
    }
};

// Define static data member outside the class
int Student::count;
//<dt> class::<var>=<initial value>;
int main()
{
    /*Student s1;
    
    s1.showCount();
    Student s2;
    s2.showCount();
    Student s3;
    Student::showCount();//Even a static member function has to be accessed using scope resolution. 
	cout<<"\nAccessing count:"<<Student::count;
		//When a static member is to be accessed outside the class, provided it is public, 
		//one must specify the name of the class, followed by scope resolution(::), 
		//followed by the name of the variable. 
	
	*/
	
	student s;
	s.register_student("aqsa", "female");
	s.display_student();
	cout<<"\nonly roll no: "<<s.get_roll();
	cout<<"\nonly total cout : "<<student::count;
	cout<<" name: "<<name<<"gender"<<gender;
    return 0;
}
