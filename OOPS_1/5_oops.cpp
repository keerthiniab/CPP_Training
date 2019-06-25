#include<iostream> 
using namespace std;

class Test {	
	public:
	static int x; 
	static int fun() { 
		return 1; // compiler error 
	} 
}; 

int Test::x;

int main() 
{ 
	Test t;
	cout << Test::fun() << "\n";	
	cout << "x:" << t.x << "\n";	
	return 0; 
} 

