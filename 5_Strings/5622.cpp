// 5622. 다이얼

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s;
	cin >> s;

	vector<int> ab(26, 0);
	ab = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	int sum = 0;

	for (int i=0; i<s.size(); i++)
	{
		int a = static_cast<int>(s[i]) - 65;
		sum += ab[a];
	}

	cout << sum << endl;

	return 0;
}
