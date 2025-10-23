// 2438. 별 찍기 - 1

#include <iostream>
#include <string>

int main()
{
	int n = 0;
	std::string s = "";

	std::cin >> n;

	for (int i=0; i<n; i++)
	{
		s += "*";
		std::cout << s << std::endl;
	}
	
	return 0;
}
