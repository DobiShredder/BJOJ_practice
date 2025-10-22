#include <iostream>
#include <algorithm>

int main()
{
	int a, b, c;
	int rwd;
	std::cin >> a >> b >> c;
	if ( a == b && a == c )
		rwd = 10000 + ( 1000 * a );
	else if ( a == b || a == c )
		rwd = 1000 + ( a * 100 );
	else if ( b == c )
		rwd = 1000 + ( b * 100 );
	else
		rwd = std::max( {a, b, c} ) * 100;

	std::cout << rwd << std::endl;

	return 0;
}
