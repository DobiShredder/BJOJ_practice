#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	if ( a > 100 || a < 0 )
		std::cout << "error!" << std::endl;
	else if ( a <= 100 && a >= 90 )
		std::cout << "A" << std::endl;
	else if ( a <= 89 && a >= 80 )
		std::cout << "B" << std::endl;
	else if ( a <= 79 && a >= 70 )
		std::cout << "C" << std::endl;
	else if ( a <= 69 && a >= 60 )
		std::cout << "D" << std::endl;
	else
		std::cout << "F" << std::endl;

	return 0;
}
