#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

string str_removeNumbers(string text);

int main()
{
    string text;

    cout << "Input text: ";
    getline(cin, text);

    string text_withoutNumbers = str_removeNumbers(text);

    cout << "\nText without numbers : " << text_withoutNumbers << '\n';

    return 0;
}

string str_removeNumbers(string text)
{
    string text_withoutNumbers;

    for (long i{0}; i < text.length(); ++i)
    {
        short ascii_code = static_cast<short>(text[i]);
        if ( ! (ascii_code >= 48 && ascii_code <= 57) )
        {
            text_withoutNumbers += text[i];
        }
    }

    return text_withoutNumbers;
}
