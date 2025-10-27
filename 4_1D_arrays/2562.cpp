// 2562. 최댓값

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int a = 0;
	for (int i=0; i<9; i++)
	{	cin >> a;
		v.push_back(a);
	}

	int loc = 1;
	int max = v[0];
	for (int i=0; i<9; i++)
	{
		if (v[i] > max)
		{	max = v[i];
			loc = i+1;
		}
	}

	cout << max << endl << loc << endl;
		
	return 0;
}
