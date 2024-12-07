#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

void print(int x, int y)
{
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
}
void swap(int &x, int &y)
{
    x ^= y ^= x ^= y;
}

int main()
{
    int x{11};
    int y{6};

    print(x, y);
    swap(x, y);
    print(x, y);

    return 0;
}
