// PROGRAM 1 
#include<iostream> 
using namespace std; 

void fun() 
{ 
	class Test // local to fun 
	{ 
		static int i; 
	}; 
} 

int main() 
{ 
	return 0; 
} 

