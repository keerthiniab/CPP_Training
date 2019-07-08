#include <iostream> 
using namespace std; 

class User 
{ 
public: 
	User() : pBase(0) 
	{ 
		// Creates Drived1 or Derived2 based on need 

		int input; // ID to distinguish between 
				// Derived1 and Derived2 

		cout << "Enter ID (1 or 2): "; 
		cin >> input; 

		while( (input != 1) && (input != 2) ) 
		{ 
			cout << "Enter ID (1 or 2 only): "; 
			cin >> input; 
		} 

		if( input == 1 ) 
		{ 
			pBase = new Derived1; 
		} 
		else if( input == 2 ) 
		{ 
			pBase = new Derived2; 
		} 
		else
		{ 
			pBase = new Derived3; 
		} 
	} 

	~User() 
	{ 
		if( pBase ) 
		{ 
			delete pBase; 
			pBase = 0; 
		} 
	} 

	// Delegates to actual object 
	void Action() 
	{ 
		pBase->DisplayAction(); 
	} 

private: 
	Base *pBase; 
}; 
