// 10811. 바구니 뒤집기

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, m = 0;
	cin >> n >> m;
	
	vector<int> v(n);
	for (int i=0; i++; i<n)
		v[i] = i+1;

	int x, y = 0;
	for (int i=0; i<m; i++)
	{
		cin >> x >> y;

		reverse(v[x], v[y]);

	}

	for (int i=0; i<n; i++)
		cout << v[i] << " ";
	cout << endl;

	return 0;
}
