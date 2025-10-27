// 10813. 공 바꾸기

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m = 0;
	cin >> n >> m;
	cin.ignore();

	vector<int> v(n);
	
	for (int i=0; i<n; i++)
		v[i] = i+1;

	for (int x=0; x<m; x++)
	{
		int a, b;
		cin >> a >> b;
		int t1 = v[a-1];
		int t2 = v[b-1];
		v[a-1] = t2;
		v[b-1] = t1;
	}

	for (int i=0; i<n; i++)
		cout << v[i] << " ";
	cout << endl;

	return 0;
}
