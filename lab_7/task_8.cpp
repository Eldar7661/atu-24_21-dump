#include <iostream>
#include <string>

using std::cout, std::cin, std::string;


int main()
{
    string text;

    cout << "Input text: ";
    getline(cin, text);

    short length = text.length();
    string text_up;

    for (short i{0}; i < length; ++i)
    {
        text_up += static_cast<char>(std::tolower(text[i]));
    }

    cout << "\nDown text: " << text_up << '\n';

    return 0;
}
