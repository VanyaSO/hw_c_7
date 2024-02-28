#include <iostream>
using namespace std;

// Написати функцію, яка приймає дві дати (тобто функція приймає шість параметрів)
// і обчислює різницю в днях між цими датами. Для розв'язання цієї задачі необхідно
// також написати функцію, яка визначає, чи є рік високосним.


bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year)
{
    switch (month) {
        case 2:
            return isLeapYear(year) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

int daysInYears(int year)
{
    // total number leap years in year
    int leapYears = (year / 4) - (year / 100) + (year / 400);
    int standartYears = year - leapYears;

    return standartYears * 365 + leapYears * 366;
}

int getDifference(int d1, int m1, int y1, int d2, int m2, int y2)
{
    int differenceInDays;

    // total number of days in date (days + convert years in days)
    int daysInFistDate = d1 + daysInYears(y1);
    // cycle for convert month in days
    for (int i = 1; i < m1; i++) {
        daysInFistDate += daysInMonth(i, y1);
    }

    int daysInSecondDate = d2 + daysInYears(y2);
    for (int i = 1; i < m2; i++) {
        daysInSecondDate += daysInMonth(i, y2);
    }

    differenceInDays = daysInSecondDate - daysInFistDate;
    return abs(differenceInDays);
}

int main()
{
    int d1, m1, y1;
    int d2, m2, y2;
    char slash = '/';

    cout << "Enter the first date in the format (1/12/1970): " << endl;
    cin >> d1 >> slash >> m1 >> slash >> y1;

    cout << "Enter the second date in the format (1/12/1970): " << endl;
    cin >> d2 >> slash >> m2 >> slash >> y2;

    cout << getDifference(d1, m1, y1, d2, m2, y2);



    return 0;
}