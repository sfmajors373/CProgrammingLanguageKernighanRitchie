#include <stdio.h>

int day_of_year(int year, int month, int day);
void month_day(int year, int yearday);
static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int main()
{
    int day, mo, dat;
    day_of_year(1688, 2, 29);

    month_day(1988, 460);
}

/* day_of_year: set day of year from month & day*/
int day_of_year(int year, int month, int day)
{
    int i, leap;
    if (year < 1752)
    {
        printf("Before the change to the Gregorian Calendar\n");
    }
    else {
       leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
       for (i = 1; i < month; i++)
       {
           day += daytab[leap][i];
       }
       printf("That is day %d of the year\n", day);
    }
}

/* month_day: set month, day from day of year */
void month_day(int year, int yearday)
{
    int i, leap;
    

    if (year < 1752)
    {
        printf("Before the change to the Gregorian Calendar\n");
    }
    else if (yearday < 0 || yearday > 365)
    {
        printf("Not a valid day of the year\n");
    }
    else {
        leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
        for(i = 1; yearday > daytab[leap][i]; i++)
        {
            yearday -= daytab[leap][i];
        }
        printf("month: %d, Day: %d\n", i , yearday);
    }
}
