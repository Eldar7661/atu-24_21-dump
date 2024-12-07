#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

string str_reverse(string text);

int main()
{
    string text;

    cout << "Input text: ";
    getline(cin, text);

    string text_nSpace = str_reverse(text);

    cout << "\nText reverse: " << text_nSpace << '\n';

    return 0;
}

string str_reverse(string text)
{
    string text_reverse;

    for (long i = text.length() - 1; i >= 0; --i)
    {
        text_reverse += text[i];

    }

    return text_reverse;
}
