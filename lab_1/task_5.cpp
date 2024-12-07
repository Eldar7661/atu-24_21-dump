#include <iostream>

int main()
{
    float x, y;

    std::cout << "Input two numbers. In format >> 1 2 :: ";

    std::cin >> x;
    std::cin >> y;

    std::cout << '\n' << x << " + " << y << " = " << x + y << '\n';
    std::cout << '\n' << x << " - " << y << " = " << x - y << '\n';
    std::cout << '\n' << x << " * " << y << " = " << x * y << '\n';
    std::cout << '\n' << x << " / " << y << " = " << x / y << '\n';

    return 0;
}
