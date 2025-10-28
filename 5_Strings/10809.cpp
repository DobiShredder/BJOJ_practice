#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s;
	cin >> s;

	vector<int> finder(26, -1);
	
	for (int i=0; i<s.size(); i++)
	{
		int pos = (int)s[i]-97;
		if (finder[pos] == -1)
			finder[pos] = i;
		else
			continue;
	}

	for (int i=0; i<finder.size(); i++)
		cout << finder[i] << " ";
	cout << endl;

	return 0;
}

