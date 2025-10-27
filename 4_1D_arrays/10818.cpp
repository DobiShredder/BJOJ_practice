// 10818. 최소, 최대

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	cin.ignore();
	vector<int> v(n);

	string line;
	getline(cin, line);
	istringstream iss(line);

	for (int i=0; i<n; i++)
		iss >> v[i];

	int min = *min_element(v.begin(), v.end());
	int max = *max_element(v.begin(), v.end());
	cout << min << " " << max << endl;	

	return 0;
}
