// 2675. 문자열 반복

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int x=0; x<t; x++)
	{
		int n;
		string s;
		cin >> n >> s;

		for (int i=0; i<s.size(); i++)
		{
			vector<char> v(n, s[i]);
			for (int j=0; j<v.size(); j++)
				cout << v[j];
		}

		cout << endl;
	}
	return 0;
}
