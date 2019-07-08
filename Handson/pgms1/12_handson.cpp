// C++ code to demonstrate NaN exception 
#include<iostream> 
#include<cmath> // for sqrt() and isnan()  
using namespace std; 

int main() 
{ 
	float a1 = 2, b1 = -2; 

	// Prints the number (1.41421) 
	cout << sqrt(a1) << endl;
 
	// Prints "nan" exception 
	// sqrt(-2) is complex number 
	cout << sqrt(b1) << endl;


	float a = sqrt(2); 
	float b = sqrt(-2); 
        /////////////////////////////////////////////////////
	// Method 1

	// Returns true, a is real number 
	// prints "Its a real number" 
	a==a? cout << "Its a real number" << endl: 
		cout << "Its NaN" << endl; 

	// Returns false, b is complex number 
	// prints "Its nan" 
	b==b? cout << "Its a real number" << endl: 
		cout << "Its NaN" << endl;  

        /////////////////////////////////////////////////////
        // Method 2

	// Returns false as a  
	// is real number 
	isnan(a)? cout << "Its NaN" << endl: 
		cout << "Its a real number" << endl; 

	// Returns true as b is  NaN 
	isnan(b)? cout << "Its NaN" << endl: 
		cout << "Its a real number" << endl; 	

	return 0; 
} 

