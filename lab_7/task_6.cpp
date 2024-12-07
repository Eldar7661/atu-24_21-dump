#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

long amount_letter_in_text(string text, char letter);

int main()
{
    string text;
    char letter;

    cout << "Input text: ";
    getline(cin, text);

    cout << "Input letter: ";
    cin >> letter;

    long amount = amount_letter_in_text(text, letter);

    cout << "\nAmount letter in this text: " << amount << '\n';

    return 0;
}

long amount_letter_in_text(string text, char letter)
{
    long count{0};

    for (long i{0}; i < text.length(); ++i)
    {
        if (text[i] == letter)
        {
            ++count;
        }
    }

    return count;
}
