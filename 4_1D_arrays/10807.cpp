// 10807. 개수 세기

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main()
{
	int n = 0;
	std::cin >> n;
	std::cin.ignore();

	std::vector<int> v(n);

	std::string line;
	std::getline(std::cin, line);

	std::istringstream iss(line);
	
	for (int i=0; i<n; i++)
		iss >> v[i];

	int f, counter = 0;
	std::cin >> f;
	std::cin.ignore();

	for (int i=0; i<n; i++)
	{
		if ( v[i] == f )
			counter +=1;
	}
	
	std::cout << counter << std::endl;
	return 0;
}
