#include<iostream> 
class Test {	 
	static void fun() const { // compiler error 
		return; 
	} 
}; 

int main() 
{ 
	getchar(); 
	return 0; 
} 

