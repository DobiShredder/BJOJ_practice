// 2563. 색종이

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n = 0;
	int m = 2;
	cin >> n;
	vector<vector <int>> input(n, vector<int> (2, 0));
	vector<vector <int>> rect;

	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
			cin >> input[i][j];
	}

	for (int x=0; x<input.size(); x++)
	{
		for (int i=0; i<10; i++)
		{
			for (int j=0; j<10; j++)
			{
				rect.push_back(vector<int> { input[x][0] + i, input[x][1] + j } );
			}
		}
	}

	sort(rect.begin(), rect.end());
	rect.erase(unique(rect.begin(), rect.end()), rect.end());
	cout << rect.size() << endl;

	return 0;
}
