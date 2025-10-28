// 11718. 그대로 출력하기

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int n = 100;

	for (int i=0; i<n; i++)
	{
		string s;
		getline(cin, s);
		for (int j=0; j<s.size(); j++)
		{
			cout << s[j]; 
		}
		cout << endl;
	}
	
	return 0;
}
