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

    string string_full = string_1 + string_2;

    cout << "\nFull string: " << string_full << '\n';


    return 0;
}
