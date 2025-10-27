// 10810. 공 넣기

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m = 0;
	std::cin >> n >> m;
	vector<int> v(n);

	for (int x=0; x<m; x++)
	{
		int i, j, k = 0;
		cin >> i >> j >> k;
		for (int t=i-1; t<j; t++)
			v[t] = k;
		
	}

	for (int x=0; x<n; x++)
		cout << v[x] << " ";
	cout << endl;

	return 0;
}
