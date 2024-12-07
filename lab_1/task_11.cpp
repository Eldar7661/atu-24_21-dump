#include <iostream>

int main()
{
    int x, y;

    std::cout << "Input number x, y. In format >> 5 6: ";

    std::cin >> x;
    std::cin >> y;

    std::cout << "\nMultiplication " << x;
    std::cout << " and " << y << ": " << x * y << '\n';

    return 0;
}
