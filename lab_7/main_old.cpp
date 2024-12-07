#include <iostream>
#include <string>

int main() {

    std::string name;
    std::string last_name;
    int age;

    std::cout << "Input you name: ";
    std::cin >> name;

    std::cout << "Input you last name: ";
    std::cin >> last_name;

    std::cout << "Input you age: ";
    std::cin >> age;

    std::cout << "\nHello " << last_name << ' ' << name << "!\n";
    std::cout << "And me age " << age << ".\n";
    std::cout << "Length you name " << name.length() << " words.\n";
    std::cout << "Length you last name " << last_name.length() << " words.\n";

    bool isRovno = ( name == last_name )?true:false;

    if (isRovno) {
        std::cout << "You name and last-name only.\n";
    } else {
        std::cout << "You name and last-name no only.\n";
    }

    std::string fullName{name+last_name};

    std::cout << "you full Name " << fullName << ".\n";

    char letter;
    bool isThereis_latter{false};
    int amount_letter{0};

    std::cout << "Char: ";
    std::cin >> letter;

    for (int i{0}; i < name.length(); ++i) {
        if ( letter == name[i] ) {
            ++amount_letter;
            isThereis_latter = true;
        }
    }
    if ( isThereis_latter ) {
        std::cout << "There is letter: " << letter << ".\n";
    } else {
        std::cout << "There is letter: " << letter << " undefaend.\n";
    }

    std::cout << "length letter in name: " << amount_letter << ".\n";

    std::string upName;
    std::string downLastName;

    for (int i{0}; i < name.length(); ++i) {
        upName += static_cast<char>(std::toupper(name[i]));
    }

    for (int i{0}; i < last_name.length(); ++i) {
        downLastName += static_cast<char>(std::tolower(last_name[i]));
    }

    std::cout << "\nUp name " << upName << ".\n";
    std::cout << "Down last-name " << downLastName << ".\n";


    // std::string palindrom;
    // std::string dump_palindrom;

    // std::cout << "Word palidrom: ";
    // std::cin >> palindrom;

    // for (int i = palindrom.length(); i >= 0 ; --i) {
    //     dump_palindrom += palindrom[i];
    // }

    // if (palindrom == dump_palindrom) {
    //     std::cout << "This word Palindrom\n";
    // } else {
    //     std::cout << "This word no Palindrom\n";
    // }




    return 0;
}
