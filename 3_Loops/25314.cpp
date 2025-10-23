// 25314. 코딩은 체육과목 입니다

#include <iostream>
#include <string>

int main()
{
	int n = 0;
	std::string s = "";
	std::cin >> n;

	for (int i=0; i<n/4; i++)
	{
		s += "long ";
	}
	s += "int";

	std::cout << s << std::endl;

	return 0;
}
