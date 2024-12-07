#include <iostream>
#include <string>
using std::cout, std::cin, std::string;

bool is_leap_year(short year);
short days(short month, short year);
bool is_valid_date(short day, short month, short year);

int main()
{
    bool is_day = is_valid_date(30, 2, 2024);

    cout << "this date " << ((is_day)?"valid":"invalid") << '\n';

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

short days(short month, short year)
{
    short day;

    switch (month)
    {
        case 1: day = 31; break;
        case 2: day = (is_leap_year(year)?29:28); break;
        case 3: day = 31; break;
        case 4: day = 30; break;
        case 5: day = 31; break;
        case 6: day = 30; break;
        case 7: day = 31; break;
        case 8: day = 31; break;
        case 9: day = 30; break;
        case 10: day = 31; break;
        case 11: day = 30; break;
        case 12: day = 31; break;
    }

    return day;
}

bool is_valid_date(short day, short month, short year)
{
    short day_in_mon = days(month, year);

    if (day <= day_in_mon)
        return true;
    else
        return false;
}
