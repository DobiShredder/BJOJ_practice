// 3003. BIJELE

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<int> split(string s);

int main()
{
	vector<int> ref = { 1, 1, 2, 2, 2, 8 };
	string line;
	getline(cin, line);
	
	vector<int> count = split(line);

	for (int i=0; i<ref.size(); i++)
		cout << ref[i]-count[i] << " ";

	cout << endl;

	return 0;
}

vector<int> split(string input)
{
	vector <int> ans;
	stringstream ss(input);
	string temp;
	char delimiter = ' ';
	while ( getline(ss, temp, delimiter) )
		ans.push_back(stoi(temp));

	return ans;
}
