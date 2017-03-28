//Program prog6.cpp
//classify a month-day combination
//in terms of seasons and weeks
#include <iostream>
using namespace std;
void classify(int, int);
void translate(int);
void whichseason(int, int);
void whichweek(int);
int main()
{
    int month;
    int day;
    char answer;

do
{
    cout << "Type in the number of a month" << '\n' << "from 1(January) to 12(December)> ";
    cin >> month;
    cout << "Type in a date within the month from 1 to 31> ";
    cin >> day;
    classify(month, day);
    cout << "Type Y to continue or N to stop> ";
    cin >> answer;
}
while (answer == 'y' || answer == 'Y');
return 0;
}
exit(0);

//Function classify:
//Input: 
//  month - a number specifying a month in the year
//  day - a number specifying a day in the month
//Process:
//  calls a function to print the month name
//  calls a function to determine which season
//  (winter, spring, summer, fall) month is in
//  calls a function to determine which week of
//  the month(1-5) day is in and print result
//output:
//  none
void classify(int month, int day)
{
    if(month < 1 || month > 12)
    {
        cout << month << " is not a valid value for the month" << '\n';
    }
    else
    {
        translate(month);
        whichseason(month, day);
    }
    
    if(day < 1 || day > 31)
    {
        cout << day <<" is not a valid value for the day" << '\n';
    }
    else
    {
        whichweek(day);
        return;
    }
}

//Function translate
//Input:
//  month - a number specifying a month in the year
//Process:
//  translate the number of the month to the name ex: (3 = march)
//Output:
//  prints the name of the month associated with the number
void translate(int month)
{
    cout << '\n' << "Month " << month << " is ";
    
    if(month == 1)
    {
        cout << "January";
    }
    if(month == 2)
    {
        cout << "February";
    }
    if(month == 3)
    {
        cout << "March";
    }
    if(month == 4)
    {
        cout << "April";
    }
    if(month == 5)
    {
        cout << "May";
    }
    if(month == 6)
    {
        cout << "June";
    }
    if(month == 7)
    {
        cout << "July";
    }
    if(month == 8)
    {
        cout << "August";
    }
    if(month == 9)
    {
        cout << "September";
    }
    if(month == 10)
    {
        cout << "October";
    }
    if(month == 11)
    {
        cout << "November";
    }
    if(month == 12)
    {
        cout << "December";
    }
    return;
}

//Function whichseason:
//Input:
//  month - a number specifying a month in the year
//  day - a number specifying a day in the month
//Process:
//  determines which season month is in
//  (winter, spring, summer, fall)
//  day assist in getting an accurate season
//Output:
//  prints the name of the season
void whichseason(int month, int day)
{
    cout << '\n';
    
    if((month == 12 && day >= 21) || month == 1 || month == 2 || (month == 3 && day < 20))
    {
        cout << "Winter is the season ";
    }
    if((month == 3 && day >= 20) || month == 4 || month == 5 || (month == 6 && day < 21))
    {
        cout << "Spring is the season ";
    }
    if((month == 6 && day >= 21) || month == 7 || month == 8 || (month == 9 && day < 22))
    {
        cout << "Summer is the season ";
    }
    if((month == 9 && day >= 22) || month == 10 || month == 11 || (month == 12 && day < 21))
    {
        cout << "Fall is the season ";
    }
    return;
}

//Function whichweek:
//Input:
//  day - a number specifying a day in the month
//Process:
//  determines which week of the month (1-5) day is in
//  each week has 7 days (duh)
//Output:
//  prints the week within the month
void whichweek(int day)
{
    cout << '\n';
    
    if(day <= 7)
    {
        cout << "It is the 1st week of the month";
    }
    if(day > 7 && day <= 14)
    {
        cout << "It is the 2nd week of the month";
    }
    if(day > 14 && day <= 21)
    {
        cout << "It is the 3rd week of the month";
    }
    if(day > 21 && day <= 28)
    {
        cout << "It is the 4th week of the month";
    }
    if(day > 28)
    {
        cout << "It is the 5th week of the month";
    }
    
    cout << '\n' << '\n';
    return;
}