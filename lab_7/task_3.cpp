#include <iostream>
#include <string>

using std::cout, std::cin, std::string;


int main()
{
    string string_1;
    string string_2;

    cout << "Input string_1: ";
    getline(cin, string_1);

    cout << "Input string_2: ";
    getline(cin, string_2);

    if (string_1 == string_2)
    {
        cout << "\nstring_1 equal string_2\n";
    } else {
        cout << "\nstring_1 unequal string_2\n";
    }

    return 0;
}
