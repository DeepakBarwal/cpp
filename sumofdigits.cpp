#include <iostream>

using namespace std;

int main()
{
	int num, rem, sum = 0;
	cout << "Enter num: ";
	cin >> num;
	
	while(num != 0)
	{
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}
	
	cout << "sum is : " << sum << endl;
	
	return 0;
}
