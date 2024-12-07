#include <iostream>
#include <string>

using std::string;

bool is_leap_year(short year);
void print_leap_year();

int main()
{
    print_leap_year();

    return 0;
}

bool is_leap_year(short year)
{

    if ( year % 4 == 0 &&
        (year % 100 != 0 ||
         year % 400 == 0)
    ){
        return true;
    }
    else
        return false;

}

void print_leap_year()
{
    using std::cout, std::cin;

    short year;
    cout << "Input year: ";
    cin >> year;

    bool is_leap = is_leap_year(year);
    string text = (is_leap)?"This year leap":"This year no leap";

    cout << text << '\n';
}
