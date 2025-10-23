// 11021. A+B - 7

#include <iostream>

int main()
{
	int n = 0;
	int a, b = 0;

	std::cin >> n;
	
	for (int i=1; i<=n; i++)
	{
		std::cin >> a >> b;
		printf("Case #%d: %d\n", i, a+b);
	}

	return 0;
}
