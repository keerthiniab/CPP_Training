// PROGRAM 2 
#include<iostream> 
using namespace std; 

void fun() 
{ 
	class Test // local to fun 
	{ 
	public: 
		static void method() 
		{ 
			cout << "Local Class method() called"; 
		} 
	}; 

	Test::method(); 
} 

int main() 
{ 
	fun(); 
	return 0; 
} 

