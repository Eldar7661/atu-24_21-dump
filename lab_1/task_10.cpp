#include <iostream>
#include <string>

int main()
{
    short x;
    float y;
    char a;
    std::string b;
    bool f;

    std::cout << "Input number: ";
    std::cin >> x;

    std::cout << "Input float number: ";
    std::cin >> y;

    std::cout << "Input simbol: ";
    std::cin >> a;

    std::cout << "Input string: ";
    std::cin >> b;

    std::cout << "Input bool: ";
    std::cin >> f;


    std::cout << "\nShort: " << x << '\n';
    std::cout << "Float: "   << y << '\n';
    std::cout << "Char: "    << a << '\n';
    std::cout << "String: "  << b << '\n';
    std::cout << std::boolalpha;
    std::cout << "Bool: "    << f << '\n';


    return 0;
}
