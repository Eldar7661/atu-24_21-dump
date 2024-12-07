#include <iostream>

int main()
{
    bool x, y;

    std::cout << "Input two bool. In format >> 1 0 :: ";

    std::cin >> x;
    std::cin >> y;


    std::cout << '\n' << x << " && " << y;
    std::cout << " == " << (x && y) << '\n';

    std::cout << '\n' << x << " || " << y;
    std::cout << " == " << (x || y) << '\n';

    std::cout << '\n' << "! " << x << " == " << (!x) << ",  ";
    std::cout << "! " << y << " == " << (!y) << '\n';

    return 0;
}
