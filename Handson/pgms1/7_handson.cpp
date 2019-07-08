#include <iostream>
using namespace std;

int main()
{
	int nums[2][3]  =  { {16, 18, 20}, {25, 26, 27} };
        // nums[i][j] => *(*(nums+i)+j)
	
	cout << "nums[0][0] : " << *(*nums) << endl;
	cout << "nums[0][1] : " << *(*(nums) + 1) << endl;
	cout << "nums[0][2] : " << *(*(nums) + 2) << endl;

	cout << "nums[1][0] : " << *(*(nums + 1)) << endl;
	cout << "nums[1][1] : " << *(*(nums + 1) + 1) << endl;
	cout << "nums[1][2] : " << *(*(nums + 1) + 2) << endl;
	return 0;
}
