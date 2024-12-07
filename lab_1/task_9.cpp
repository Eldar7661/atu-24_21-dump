#include <iostream>
#include <string>

int main()
{
    std::string x;
    std::cout << "Input number: ";
    std::cin >> x;

    int y = std::stoi(x);

    std::cout << "string to int: " << y << '\n';


    return 0;
}
