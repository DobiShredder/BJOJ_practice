// 15552. 빠른 A+B

#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int n = 0;
	int a, b = 0;
	std::cin >> n;
	
	for (int i=0; i<n; i++)
	{
		std::cin >> a >> b;
		std::cout << a + b << "\n";
	}

	return 0;
}
