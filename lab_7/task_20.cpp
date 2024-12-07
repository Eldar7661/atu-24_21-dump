#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

void str_printWords(string text);

int main()
{
    string text;

    cout << "Input text: ";
    getline(cin, text);

    str_printWords(text);

    return 0;
}

void str_printWords(string text)
{
    cout << '\n';
    for (long i{0}; i < text.length(); ++i)
    {
        if (text[i] == ' ')
        {
            cout << '\n';
        } else {
            cout << text[i];
        }
    }
    cout << '\n';
}
