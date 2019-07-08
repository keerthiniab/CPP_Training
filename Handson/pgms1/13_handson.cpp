// C++ program to demontrate problem with NULL 
#include <bits/stdc++.h> 
using namespace std; 

// function with integer argument 
int fun(int N) { cout << "fun(int)" << endl ; } 

// Overloaded function with char pointer argument 
int fun(char* s) { cout << "fun(char *)" << endl; } 

int main() 
{ 
	// Ideally, it should have called fun(char *), 
	// but it causes compiler error. 

	//fun(NULL); 
	fun(nullptr);

	int *ptr = NULL; 
	//int *ptr = nullptr; 

	// Below line compiles 
	if (ptr) { cout << "true" << endl; }     
	else { cout << "false" << endl; } 
} 

