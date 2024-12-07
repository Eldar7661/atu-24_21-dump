#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

int main()
{
    string text;

    cout << "Input text: ";
    getline(cin, text);

    short start, length;

    cout << "Input index start: ";
    cin >> start;

    cout << "Input length: ";
    cin >> length;

    string cutout_text = text.substr(start, length);

    cout << "\nCut out Text: '" << cutout_text << "'\n";


    return 0;
}
