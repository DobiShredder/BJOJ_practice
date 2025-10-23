// 10871. X보다 작은 수

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main()
{
	int n, x = 0;
	std::cin >> n >> x;
	std::cin.ignore();

	std::string line;
	std::getline(std::cin, line);
	
	std::istringstream iss(line);

	std::vector<int> v(n);
	for (int i=0; i<n; i++)
	{
		iss >> v[i];
		if ( v[i] < x )
			std::cout << v[i] << " ";
	}

	std::cout << std::endl;

	return 0;
}
