#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

bool str_thereisNumber(string text);

int main()
{
    string text;

    cout << "Input text: ";
    getline(cin, text);

    bool thereisNumber = str_thereisNumber(text);

    if (thereisNumber)
    {
        cout << "\nText contains numbers.\n";
    } else {
        cout << "\nText not contains numbers.\n";
    }

    return 0;
}

bool str_thereisNumber(string text)
{
    for (long i{0}; i < text.length(); ++i)
    {
        short ascii_code = static_cast<short>(text[i]);
        if (ascii_code >= 48 && ascii_code <= 57)
        {
            return true;
        }
    }

    return false;
}
