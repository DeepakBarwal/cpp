#include <iostream>
#include <vector>

using namespace std;

int maxpair(const vector<int>& num)
{
	int result = 0;
	int n = num.size();
	
	for(int i = 0; i < n; ++i)
	{
		for(int j = i + 1; j < n; ++j)
		{
			if(num[i] * num[j] > result)
			{
				result = num[i] * num[j];
			}
		}
	}
	return result;
}

int main()
{
	int n;
	cin >> n;
	
	vector<int> num(n);
	for(int i = 0; i < n; ++i)
	{
		cin >> num[i];
	}
	
	cout << maxpair(num) << endl;
	return 0;
}
	
