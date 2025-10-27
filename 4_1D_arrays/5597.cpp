// 5597. 과제 안 내신 분..?

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n = 30;
	vector<int> v(n);
	for (int i=0; i<n-2; i++)
	{
		int a = 0;
		cin >> a;
		v[a-1] = a;
	}

	for (int i=0; i<n; i++)
	{
		if (v[i] == 0)
			cout << i+1 << endl;
	}

	return 0;	
}
