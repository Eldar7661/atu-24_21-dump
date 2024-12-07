#include <iostream>
#include <string>

int main()
{
    char a;
    std::cout << "Input one ASCII simbol: ";
    std::cin >> a;

    std::cout << "\nASCII code this simbol: ";
    std::cout << static_cast<short>(a) << '\n';

    return 0;
}
