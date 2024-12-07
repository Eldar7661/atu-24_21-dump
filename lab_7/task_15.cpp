#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

string str_removeVowels(string text);
constexpr char vowels[] = {
    'a', 'e', 'i', 'o', 'u',
    'A', 'E', 'I', 'O', 'U'
};

int main()
{
    string text;

    cout << "Input text: ";
    getline(cin, text);

    string text_withoutVowels = str_removeVowels(text);

    cout << "\nText without vowels: " << text_withoutVowels << '\n';

    return 0;
}

string str_removeVowels(string text)
{
    string text_withoutVowels;
    short length_vowels = sizeof(vowels) / sizeof(vowels[0]);

    for (long i{0}; i < text.length(); ++i)
    {
        bool thereis{false};
        for (short j{0}; j < length_vowels; ++j)
        {
            if (text[i] == vowels[j])
            {
                thereis = true;
                break;
            }
        }

        if (!thereis)
        {
            text_withoutVowels += text[i];
        }

    }

    return text_withoutVowels;
}
