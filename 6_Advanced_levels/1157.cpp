// 1157. 단어 공부

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> check(26, 0);
	string s;
	cin >> s;

	for (int i=0; i<s.size(); i++)
	{
		int s_int = (int)s[i];
		if ( s_int < 97 )
		{
			int pos = s_int - 65;
			check[pos]++;
		}
		else
		{
			int pos = s_int - 97;
			check[pos]++;
		}
	}

	vector<int>::iterator max_iter = max_element(check.begin(), check.end());
	int max_index = distance(check.begin(), max_iter);
	char result;

	for (int i=0; i<check.size(); i++)
	{
		if ( max_index == i )
			continue;
		else if ( check[max_index] == check[i] )
		{
			result = '?';
			break;
		}
		else
			result = (char) (max_index + 65);
	}

	cout << result << endl;

	return 0;
}
