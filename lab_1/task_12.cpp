#include <iostream>

int main()
{
    float x, y;

    std::cout << "Input degrees Celsius: ";
    std::cin >> x;

    y = (x * 1.8) + 32;

    std::cout << "\nDegrees Fahrenheit: " << y << '\n';


    return 0;
}
