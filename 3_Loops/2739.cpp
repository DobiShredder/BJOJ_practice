// 2739. 구구단

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	for (int i=1; i<10; i++)
	{
		printf("%d * %d = %d\n", a, i, a*i);
	}

	return 0;
}
