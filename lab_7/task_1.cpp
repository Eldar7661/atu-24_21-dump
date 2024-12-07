#include <iostream>
#include <string>

using std::cout, std::cin, std::string;



int main()
{
    string name;
    unsigned short age{0};

    cout << "Input name: ";
    getline(cin, name);

    cout << "Input age: ";
    cin >> age;

    cout << "\nName: " << name << '\n';
    cout << "Age: " << age;


    return 0;
}
