// 2738. 행렬 덧셈

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m = 0;
	cin >> n >> m;
	cin.ignore();

	vector<vector<int>> a(n, vector<int> (m,0) );
	vector<vector<int>> b(n, vector<int> (m,0) );

	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin >> b[i][j];
        }
    }

	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cout << a[i][j] + b[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
