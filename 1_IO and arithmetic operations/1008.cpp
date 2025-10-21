#include <iostream>
#include <iomanip>

int main()
{
        double a, b, c;
        std::cin >> a >> b;
        if ( a < 0 && a > 10 && b < 0 && b > 10 )
                std::cout << "error!" << std::endl;
        else
                c = a / b;
                std::cout << std::setprecision(20) << c << std::endl;
        return 0;
}
