// 2525. 오븐 시계

#include <iostream>

int main()
{
	int a, b, c, d, e;
	std::cin >> a >> b;
	std::cin >> c;
	d = b + c;

	a = a + (d / 60);
	e = d % 60;
	
	if ( a >= 24 )
		a = a - 24;

	std::cout << a << " " << e << std::endl;

	return 0;
}
