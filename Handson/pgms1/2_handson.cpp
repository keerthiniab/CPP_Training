#include <iostream>
using namespace std;

int main()
{
	int i;
	float f;
	double d;
	char c;
	char s[5];
	string z;
 
        cout << "Enter Integer : " << endl;
	cin >> i;
    
        cout << "Enter Float : " << endl;
	cin >> f;

        cout << "Enter Double : " << endl;
	cin >> d;

        cout << "Enter char : " << endl;
 	cin >> c;

        cout << "Enter char array : " << endl;
	cin >> s;
 
        cout << "Enter string : " << endl;
        cin >> z;

        cout << "============================\n";

        cout << "i  : " << i << endl;
        cout << "f  : " << f << endl;
        cout << "d  : " << d << endl;
        cout << "c  : " << c << endl;
        cout << "s  : " << s << endl;
        cout << "z  : " << z << endl;

	return 0;
}
