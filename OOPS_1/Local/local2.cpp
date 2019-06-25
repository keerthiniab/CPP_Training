#include<iostream> 
using namespace std; 

void fun() 
{	 
	// Local class 
	class Test 
	{ 
		/* ... */	
	}; 

	Test t; // Fine 
	Test *tp; // Fine 
} 

int main() 
{ 
	Test t; // Error 
	Test *tp; // Error 
	return 0; 
} 

