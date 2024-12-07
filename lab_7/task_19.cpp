#include <iostream>
#include <string>

using std::cout, std::cin, std::string;


int main()
{
    string text;
    short amountPrint{0};

    cout << "Input text: ";
    getline(cin, text);

    cout << "Input amount print text: ";
    cin >> amountPrint;

    cout << '\n';
    for (short i{0}; i < amountPrint; ++i)
    {
        cout << text << '\n';
    }

    return 0;
}
