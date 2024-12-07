#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

string str_removeSpace(string text);

int main()
{
    string text;

    cout << "Input text: ";
    getline(cin, text);

    string text_nSpace = str_removeSpace(text);

    cout << "\nText without space: " << text_nSpace << '\n';

    return 0;
}

string str_removeSpace(string text)
{
    string text_nSpace;

    for (long i{0}; i < text.length(); ++i)
    {
        if (text[i] != ' ')
        {
            text_nSpace += text[i];
        }
    }

    return text_nSpace;
}
