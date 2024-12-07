#include <iostream>

int main()
{
    float x, y, z, middle;

    std::cout << "Input three numbers. In format >> 1 2 3 :: ";

    std::cin >> x;
    std::cin >> y;
    std::cin >> z;

    middle = (x + y + z) / 3;

    std::cout << "\nMiddle numbers " << x << ' ';
    std::cout << y << ' ' << z << " :: " << middle << '\n';

    return 0;
}
