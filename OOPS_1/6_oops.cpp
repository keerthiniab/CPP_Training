#include<iostream> 
class Test {	 
	static Test * fun() { 
		return this; // compiler error 
	} 
}; 

int main() 
{ 
	getchar(); 
	return 0; 
} 

