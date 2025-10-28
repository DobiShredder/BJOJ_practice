// 11720. 숫자의 합

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	cin >> s;

	int sum = 0;

	for (int i=0; i<n; i++)
	{
		int c = s[i] - '0';
		sum += c;
	}

	cout << sum << endl;

}
