#include <iostream>
#include <vector>

using namespace std;

long long max_pdt(const vector<int>& num)
{
	int n = num.size();
	
	int max_index1 = -1;
	for(int i; i < n; ++i)
	{
		if((max_index1 == -1) || (num[i] > num[max_index1]))
		{
			max_index1 = i;
		}
	}
	
	int max_index2 = -1;
	for(int j; j < n; ++j)
	{
		if((num[j] != num[max_index1]) && (((max_index2 == -1) || num[j] > num[max_index2])))
		{
			max_index2 = j;
		}
	}
	
	return ((long long)(num[max_index1])) * num[max_index2];
	
}

int main()
{
	int n;
	cin >> n;
	
	vector<int> num(n);
	for(size_t i = 0; i < num.size(); ++i)
	{
		cin >> num[i];
	}
	
	long long result = max_pdt(num);
	cout << result << endl;
	
	return 0;
}
