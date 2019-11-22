/*
    Class for storing a date and finding the next and previous days

    Gilberto Echeverria
    22/11/2019
*/

#include <iostream>

using namespace std;

class CalendarDate {
    private:
        // Attributes
        int day;
        int month;
        int year;
        string format;

        // Private methods
        bool isLeap(int _year);
        int daysInMonth(int _month, int _year);
        void formatDate(int _day, int _month, int _year);

    public:
        // Constructor
        CalendarDate(int _day, int _month, int _year, string _format);
        // Private methods
        void printDate();
        void nextDate();
        void previousDate();
        void setFormat(string _format);
        void setDate(int _day, int _month, int _year);
};

CalendarDate::CalendarDate(int _day, int _month, int _year, string _format)
{
    setFormat(_format);
    setDate(_day, _month, _year);
}

void CalendarDate::setFormat(string _format)
{
    if (_format == "DDMMYY" || _format == "DDMMYYYY" || _format == "YYYYMMDD")
    {
        format = _format;
    }
    else
    {
        cout << "Invalid format! Using YYYYMMDD instead" << endl;
        format = "YYYYMMDD";
    }
}

void CalendarDate::setDate(int _day, int _month, int _year)
{
    // Validate input year
    if (_year >= 0)
    {
        year = _year;
    }
    else
    {
        cout << "Invalid year! Using 2000 instead" << endl;
        year = 2000;
    }

    // Validate input month
    if (_month >= 1 && _month <= 12)
    {
        month = _month;
    }
    else
    {
        cout << "Invalid month! Using 1 instead" << endl;
        month = 1;
    }

    // Validate day
    if (_day >= 1 && _day <= daysInMonth(month, year))
    {
        day = _day;
    }
    else
    {
        cout << "Invalid day! Using 1 instead" << endl;
        day = 1;
    }
}

bool CalendarDate::isLeap(int _year)
{
    if (_year % 4 == 0 && (_year % 100 != 0 || _year % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int CalendarDate::daysInMonth(int _month, int _year)
{
    if (_month == 4 || _month == 6 || _month == 9 || month == 11)
    {
        return 30;
    }
    else if (_month == 2)
    {
        if (isLeap(_year))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        return 31;
    }
}

// Return a string with the date according to the currently valid format
void CalendarDate::formatDate(int _day, int _month, int _year)
{
    if (format == "DDMMYY")
    {
        cout << _day << "/" << _month << "/" << _year % 100 << endl;
    }
    if (format == "DDMMYYYY")
    {
        cout << _day << "/" << _month << "/" << _year << endl;
    }
    if (format == "YYYYMMDD")
    {
        cout << _year << "/" << _month << "/" << _day << endl;
    }
}

// Print the current date stored in the class
void CalendarDate::printDate()
{
    formatDate(day, month, year);
}

// Print the next calendar date
void CalendarDate::nextDate()
{
    int next_day;
    int next_month = month;
    int next_year = year;

    // If this is the last day in the month
    if (day == daysInMonth(month, year))
    {
        // If this is the last month
        if (month == 12)
        {
            next_month = 1;
            next_year = year + 1;
        }
        else
        {
            next_month = month + 1;
        }
        next_day = 1;
    }
    else
    {
        next_day = day + 1;
    }
    
    formatDate(next_day, next_month, next_year);
}

void CalendarDate::previousDate()
{
    int previous_day;
    int previous_month = month;
    int previous_year = year;

    if (day == 1)
    {
        if (month == 1)
        {
            previous_day = 31;
            previous_month = 12;
            previous_year = year - 1;
        }
        else
        {
            previous_month = month - 1;
            previous_day = daysInMonth(previous_month, previous_year);
        }
    }
    else
    {
        previous_day = day - 1;
    }

    formatDate(previous_day, previous_month, previous_year);
}


int main()
{
    int the_day;
    int the_month;
    int the_year;
    string the_format;

    cout << "Enter the day: ";
    cin >> the_day;
    cout << "Enter the month: ";
    cin >> the_month;
    cout << "Enter the year: ";
    cin >> the_year;
    cout << "Enter the format (DDMMYY or DDMMYYYY or YYYYMMDD: ";
    cin >> the_format;

    CalendarDate today(the_day, the_month, the_year, the_format);
    today.printDate();
    today.nextDate();
    today.previousDate();

    today.setFormat("DDMMYY");
    today.printDate();

    return 0;
}
