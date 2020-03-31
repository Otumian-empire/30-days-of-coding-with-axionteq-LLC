// https://www.geeksforgeeks.org/timer-c-using-system-calls/
/* project: 
count-down timer
after the count down opens youtube with firefox
change firefox to the browser name of choice
change clear to cls on windows if clear does not work  */

#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main()
{
    unsigned int hours = 0, uhours = 0;
    unsigned int minutes = 0, uminutes = 0;
    unsigned int seconds = 0, useconds = 0;

    cout << "Alarm program" << endl;
    cout << "-------------" << endl;
    cout << "By default, alarm is set for 30seconds." << endl;
    cout << "Can not be set for more than 24hrs, thus alarm would be set default (0:0:30)." << endl;

    cout << "Enter alarm time: (format-> H M S) ";
    cin >> uhours >> uminutes >> useconds;

    if (uhours > 23)
    {
        uhours = 0;
        uminutes = 0;
        useconds = 0;
    }

    if (useconds < 1 && uhours < 1 && uminutes < 1)
    {
        useconds = 30;
    }

    sleep(2);
    system("clear");

    cout << "Alarm set for: " << uhours << " : " << uminutes << " : " << useconds << endl;

    sleep(2);
    system("clear");

    while (hours < uhours || minutes << uminutes || seconds < useconds)
    {
        seconds += 1;

        if (seconds > 59)
        {
            minutes += 1;
            seconds = 0;
        }

        if (minutes > 59)
        {
            hours += 1;
            minutes = 0;
        }

        cout << hours << " : " << minutes << " : " << seconds << endl;

        sleep(1);
        system("clear");
    }

    cout << "Time up!!" << endl;

    sleep(2);
    system("clear");
    system("firefox https://www.youtube.com/watch?v=gSaLeuGrvUI");

    return 0;
}
