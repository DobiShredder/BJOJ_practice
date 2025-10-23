// 11022. A+B - 8

#include <iostream>

int main()
{
	int n = 0;
	int a, b = 0;

	std::cin >> n;

	for (int i=1; i<=n; i++)
	{
		std::cin >> a >> b;
		std::cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << std::endl;
	}

	return 0;
}
