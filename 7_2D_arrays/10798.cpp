// 10798. 세로읽기

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n_line = 5;
	int n_str = 15;
	

	vector<string> input;
	string output;

	for (int i=0; i<n_line; i++)
	{
		string line;
		cin >> line;
		input.push_back(line);
	}


	for (int i=0; i<n_str; i++)
	{
		for (int j=0; j<n_line; j++)
		{
			int x_size = input[j].size();
			if (i < x_size)
				output.push_back(input[j][i]);
			else
				continue;
		}
	}

	for (int i=0; i<output.size(); i++)
	{
		cout << output[i];
	}
	cout << endl;

	return 0;
}
