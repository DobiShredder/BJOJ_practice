// 10988. 팰린드롬인지 확인하기

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string input;
	cin >> input;

	int start = 0;
	int end = input.size();

	bool ans;

	while ( start < end )
	{
		if (input[start] == input[end-1])
			ans = true;
		else
		{
			ans = false;
			break;
		}
			
		start++;
		end--;
	}

	cout << ans << endl;

	return 0;
}
