#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

short str_getIndexLetter(string text, char letter);

int main()
{
    string text;
    char letter;

    cout << "Input text: ";
    getline(cin, text);

    cout << "Input letter: ";
    cin >> letter;

    short index = str_getIndexLetter(text, letter);

    if (index == -1)
    {
        cout << "\n letter '" << letter << "' not found in text.\n";
    } else {
        cout << "\nIndex letter in text: " << index << '\n';
    }

    return 0;
}

short str_getIndexLetter(string text, char letter)
{

    for (short i{0}; i < text.length(); ++i)
    {
        if (text[i] == letter)
        {
            return i;
        }
    }

    return -1;
}
