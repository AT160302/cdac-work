#include<iostream>

using namespace std;

int main(){
	// The compiler turns this lambda into a hidden class.
    // 'auto' is mandatory because 
	//we don't know the name of that class!
	auto add = [](int a, int b)
{

    return a + b;
};
 
cout <<"addition : "<< add(10, 20);
return 0;
}
