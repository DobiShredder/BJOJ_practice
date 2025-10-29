// 2444. 별 찍기 - 7

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Centered(string s, int width);

int main()
{
	int n = 0;

	cin >> n;
	string s;

	vector<int> odd_nums;
	for (int i=0; i<n; i++)
	{
		int t = (2 * i) + 1;
		odd_nums.push_back(t);
	}

	for (int i : odd_nums)
	{
		string s(i, '*');
		Centered(s, 2 * n);
	}
	
	for (int i=odd_nums.size()-2; i>=0; i--)
	{
		string s(odd_nums[i], '*');
		Centered(s, 2*n);
	}

	return 0;
}

void Centered(string text, int width)
{
	int padding = (width - text.length()) / 2;
	if (padding > 0)
		cout << string(padding, ' ');
	cout << text << endl;
}
