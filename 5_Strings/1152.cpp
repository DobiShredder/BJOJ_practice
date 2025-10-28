// 1152. 단어의 개수

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string> split(string input, char delimiter);

int main()
{
	string s;
	s.reserve(10000000);
	getline(cin, s);
    
	if (s[0] == '\0' || (s[0] == ' ' && s[1] == '\0'))
	{
        cout << 0 << endl;
		return 0;
	}

	char delm = ' ';
	string d;
	d.push_back(delm);

	vector<string> x = split(s, delm);
	int n = 0;

	for (int i=0; i<x.size(); i++)
		n++;

	if (s[0] == '\0' || (s[0] == ' ' && s[1] == '\0'))
    {
        cout << 0 << endl;
        return 0;
    }
	else if (s[0] == ' ' )
		n--;
	cout << n << endl;

	return 0;
}

vector<string> split(string input, char delimiter)
{
	vector<string> ans;
	stringstream ss(input);
	string temp;
	temp.reserve(10000000);
	string d;
	d.push_back(delimiter);

	while (getline(ss, temp, delimiter))
	{
		ans.push_back(temp);
	}

	return ans;
}
