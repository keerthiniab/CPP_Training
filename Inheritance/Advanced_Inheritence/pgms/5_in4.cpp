#include <iostream> 
using namespace std; 

class Base 
{ 
protected: 
	int i; 
public: 
	Base(int a)	 { i = a; } 
	virtual void display() 
	{ cout << "I am Base class object, i = " << i << endl; } 
}; 

class Derived : public Base 
{ 
	int j; 
public: 
	Derived(int a, int b) : Base(a) { j = b; } 
	virtual void display() 
	{ cout << "I am Derived class object, i = "
		<< i << ", j = " << j << endl; } 
}; 

// Global method, Base class object is passed by value 
void somefunc (Base * obj) 
{ 
	obj->display(); 
} 

int main() 
{
	Base *bp = new Base(33) ; 
	Derived *dp = new Derived(45, 54); 
	somefunc(bp); 
	somefunc(dp);  // No Object Slicing 
	return 0;  
} 

