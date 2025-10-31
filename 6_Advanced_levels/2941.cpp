// 2941. LJESNJAK

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n = 0;
	vector<string> Cro;
	Cro = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z-" };

	string input;
	cin >> input;

	string replacement = " ";

	for (int i=0; i<Cro.size(); i++)
	{
		int t = Cro[i].size();
		size_t idx;
		while (idx = input.find(Cro[i]) != string::npos)
		{
			cout << idx << endl;
			input = input.replace(idx, t, replacement);
			cout << input << endl;
			n++;
		}
	}

	cout << n << endl;
	for (int i=0; i<input.size(); i++)
		cout << input[i];
	cout << endl;

	return 0;
}
