#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

string str_replaceLetter(string text, char letter_select, char letter_new);

int main()
{
    string text;
    char letter_select, letter_new;

    cout << "Input text: ";
    getline(cin, text);

    cout << "Input selected letter: ";
    cin >> letter_select;

    cout << "Input new letter: ";
    cin >> letter_new;

    string text_new = str_replaceLetter(text, letter_select, letter_new);

    cout << "\nReplace letter '" << letter_select << "' to '";
    cout << letter_new << "' : " << text_new << '\n';

    return 0;
}

string str_replaceLetter(string text, char letter_select, char letter_new)
{
    string text_new;

    for (long i{0}; i < text.length(); ++i)
    {
        // if (text[i] == letter_select)
        // {
        //     text_new += letter_new;
        // } else {
        //     text_new += text[i];
        // }

        text_new += (text[i] == letter_select) ? letter_new : text[i];
    }

    return text_new;
}
