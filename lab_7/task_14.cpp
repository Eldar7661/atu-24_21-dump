#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

long str_amountWords(string text);

int main()
{
    string text;

    cout << "Input text: ";
    getline(cin, text);

    long amount_words = str_amountWords(text);

    cout << "\nAmount words in Text : " << amount_words << '\n';

    return 0;
}

long str_amountWords(string text)
{
    if (text.empty())
    {
        return 0;
    }

    long count;
    bool current_word{false};

    for (long i{0}; i < text.length(); ++i)
    {
        if ((text[i] == ' ') && current_word)
        {
            ++count;
        }

        current_word = (text[i] == ' ') ? false : true;
    }

    return count;
}
