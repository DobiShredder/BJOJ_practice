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
	for (int i=0; i<n; i++)
		v[i] = i+1;

	int x, y = 0;
	for (int i=0; i<m; i++)
	{
		cin >> x >> y;

		while ( x < y )
		{
			int beg = x-1;
			int end = y-1;
			swap(v[beg], v[end]);
			x++;
			y--;
		}
	}

	for (int i=0; i<n; i++)
		cout << v[i] << " ";
	cout << endl;

	return 0;
}
