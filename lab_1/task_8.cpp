#include <iostream>
#include <string>

int main()
{
    std::string x{"Eldar"};
    std::string y{"Aliev"};
    char space{' '};

    std::string full{x + space + y};

    std::cout << "Full string: " << full << '\n';


    return 0;
}
