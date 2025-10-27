// 3052. 나머지

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n = 10;
	int s = 42;
	vector<int> v(s);

	int a = 0;
	for (int i=0; i<n; i++)
	{
		cin >> a;
		v[a%s]++;
	}
	
	int c = 0;
	for (int i=0; i<s; i++)
		if (v[i] != 0)
			c++;
	cout << c << endl;

	return 0;
}
