// 2566. 최댓값

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n = 9;

	vector<vector<int>> a(n, vector<int> (n,0));

	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cin >> a[i][j];
		}
	}

	vector<int> max_vec;
	vector<int> max_x;
	int max_y;
	int max_val = 0;
	for (int i=0; i<n; i++)
	{
		max_x.push_back(max_element(a[i].begin(), a[i].end()) - a[i].begin());
		max_val = *max_element(a[i].begin(), a[i].end());
		max_vec.push_back(max_val);
	}

	max_val = *max_element(max_vec.begin(), max_vec.end());
	max_y = max_element(max_vec.begin(), max_vec.end()) - max_vec.begin();

	cout << max_val << endl;
	cout << max_y+1 << " " << max_x[max_y]+1 << endl;

	return 0;
}
