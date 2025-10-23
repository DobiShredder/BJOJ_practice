// 25304. 영수증

#include <iostream>

int main()
{
	int X, sum = 0;
	int n = 0;
	int a, b = 0;

	std::cin >> X;
	std::cin >> n;
	
	for (int i=0; i<n; i++)
	{
		std::cin >> a >> b;
		sum += a * b;
	}

	if ( X == sum )
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;

	return 0;
}
