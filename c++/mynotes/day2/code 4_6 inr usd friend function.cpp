

#include <iostream>
using namespace std;

class usd;  // Forward declaration

class inr
{
 private: 
 //public:  
	float amount;

public:
    void set_data()
    {
    	//amount=a;
        cout<<"enter the inr ";
        cin>>amount;
        
    }

    friend void display_evaluation(inr r, usd d);
};

class usd
{
 private:
    float amount;

public:
    void set_data2()
    {
    	//amount=a;
        cout<<"enter usd ";
        cin>>amount;
    }

    friend void display_evaluation(inr r, usd d);
};

void display_evaluation(inr r,usd d)
{
	float total_inr=r.amount+(d.amount*90);
	float total_usd= (r.amount/90)+d.amount;
    cout << "total amount in Inr: "<<total_inr<< endl;
    //cin>>0_r.inr;
    cout << "total amount in usd: "<<total_usd<< endl;
    //cin>>o_d.usd;
    //cout << "total amount in inr = " << 0_r.inr << endl;
}

int main()
{
    inr r;
    usd d;

    r.set_data();
    d.set_data2();
     
	display_evaluation(r,d);
    return 0;
}
