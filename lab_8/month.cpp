#include <iostream>
#include <string>

using std::string;

int days(int month);
void printDay(int mon);
string monthName(int month);

int main()
{
    printDay(1);
    printDay(2);
    printDay(3);
    printDay(12);

}

void printDay(int mon)
{
    using std::cout, std::cin;
    cout << monthName(mon) << ": "<< days(mon) << " days.\n";
}

int days(int month)
{
    short day;

    switch (month)
    {
        case 1: day = 31; break;
        case 2: day = 28; break;
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

string monthName(int month)
{
    string name;

    switch (month)
    {
        case 1: name = "January"; break;
        case 2: name = "February"; break;
        case 3: name = "March"; break;
        case 4: name = "Aplir"; break;
        case 5: name = "May"; break;
        case 6: name = "June"; break;
        case 7: name = "July"; break;
        case 8: name = "August"; break;
        case 9: name = "September"; break;
        case 10: name = "October"; break;
        case 11: name = "November"; break;
        case 12: name = "December"; break;
    }

    return name;
}
