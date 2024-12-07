#include <iostream>
#include <string>

using std::cout, std::cin, std::string;



int main()
{
    string text;

    cout << "Input String: ";
    getline(cin, text);


    cout << "\nString length: " << text.length() << " bits\n";


    return 0;
}
