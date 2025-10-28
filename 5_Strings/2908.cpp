// 2908. 상수

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n1, n2 = 0;
	cin >> n1 >> n2;

	string s1 = to_string(n1);
	string s2 = to_string(n2);
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());

	if (s1 > s2)
		cout << s1 << endl;
	else
		cout << s2 << endl;

	return 0;
}
