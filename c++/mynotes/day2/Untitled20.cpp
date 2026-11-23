#include <iostream>
using namespace std;
/*
pointer of type parent can ref to child also due to inheritance 
but rejects override.
*/
class operation
{
public:
   virtual void add(int a,int b)=0;
    
	
	virtual	void sub()
	{
		
		cout<<"\nParent:native language";
	}
	
};
class calculator:public operation
{
	public:
	void add()
    {
    	cout<<"\nChild:wada pav/samosa pav ";
	}


};
int main()
{
   Parent obj_p;
   Child obj_c;
   Parent *p=&obj_p;
   p->eat();//This will call the parent's own method. 
   p=&obj_c;
   p->eat();//Virtual function. Now this will call the child's own method. 
  
   
    return 0;
}
