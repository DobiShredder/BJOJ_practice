#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b;
	c = b - 45;

	if ( c < 0 ) {
		c = c + 60;
		a = a - 1;
		if ( a < 0 )
			a = a + 24;
	}

	std::cout << a << " " << c << std::endl;
	
	return 0;
}
