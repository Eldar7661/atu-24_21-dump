#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

int main()
{
    string text;
    char letter_new;

    cout << "Input text: ";
    getline(cin, text);

    cout << "Input new letter: ";
    cin >> letter_new;

    char letter_old = text[0];
    text[0] = letter_new;

    cout << "\nReplace first letter '" << letter_old << "' to '";
    cout << letter_new << "' : " << text << '\n';

    return 0;
}
