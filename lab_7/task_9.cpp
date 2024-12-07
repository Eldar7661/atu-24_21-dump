#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

bool is_palindrome(string text);

int main()
{
    string text;

    cout << "Palindrome check: ";
    cin >> text;

    bool flag = is_palindrome(text);

    if (flag)
    {
        cout << "\nWord '" << text << "' is palindrom.\n";
    } else {
        cout << "\nWord '" << text << "' is no-palindrom.\n";
    }


    return 0;
}

bool is_palindrome(string text)
{
    bool flag{true};

    for (short i{0}; i < (text.length() / 2); ++i)
    {
        if (text[i] != text[text.length() - 1 - i])
        {
            flag = false;
            break;
        }
    }

    return flag;
}
