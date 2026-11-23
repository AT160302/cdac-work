#include<iostream> 
using namespace std;

class Shape {
	public: 
	virtual void area() {
		cout<<"Area of shape: "<<endl;
	} 
};

class Circle : public Shape {
	public:
		void area() override {
			int r;
			cout<<"enter the radius: ";
			cin>>r;
			cout<<"Area of circle: "<<3.14*r*r<<endl;
		}
};

class Rectangle :public Shape {
	public: 
	void area() override {
		int l,b;
		cout<<"Enter the length and breadth: \n";
		cin>>l>>b;
		cout<<"Area of rectangle: "<<l*b<<endl;
	}
};

class Triangle : public Shape {
    public: 
    void area() override {
        int b , h;
        cout<<"Enter the base and height: \n";
        cin>>b>>h;
        cout<<"Area of triangle: "<<0.5*b<<h<<endl;
    }
};

int main() {
    
// using pointer
// 	Shape *s;
	
// 	Circle c;
// 	Rectangle r;
// 	Triangle t;
	
// 	s = &c;
// 	s->area();
	
// 	s= &r;
// 	s->area();
	
// 	s= &t;
// 	s->area();



//using without pointer
Circle c;
Rectangle r;
Triangle t;

c.area();
r.area();
t.area();
	
}