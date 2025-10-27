// 1546. 평균

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

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
	
	int max = v[0];
	for (int i=0; i<n; i++)
	{
		if (max < v[i])
			max = v[i];
	}

	float sum = 0;
	for (int i=0; i<n; i++)
	{
		sum += static_cast<float>(v[i]) / max * 100;
	}

	cout << sum / n << endl;

	return 0;
}
