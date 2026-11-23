#include <iostream> 
using namespace std;

//Create a class that counts the total number of objects created.
class Student {
	static int count;
	
	public:
	Student() {
		count++;
	}
	
	void display_count() {
		cout<<"total number of student: "<<count;
	}
};

int Student::count =0; 

int main() {
	Student s1;
	Student s2;
	Student s3;
	
	s3.display_count();
	
}
