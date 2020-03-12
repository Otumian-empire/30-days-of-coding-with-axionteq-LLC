/* Given a time elasped in seconds, convert it to hours, minutes anf seconds.
In the format, HH:MM:SS */

/*
problem definition:
    convert a given seconds to hours, minutes and seconds
analysis:
    Input:
        second
    Output:
        Hours, minutes and seconds
    Process:
        - divide the elasped time by 3600 to get hours
            find the remaining seconds and divide by 60 to get minutes
            return the remaining seconds as seconds
design:
    Let elaspedSeconds be the elasped seconds, which would be accepted as
        an integer input
    let hours be the hours, minutes be the minutes and seconds be the seconds
        of type int
    let remainingSeconds be the seconds remaining
    
    hours = elaspedSeconds / 3600;
    remainingSeconds = elaspedSeconds - (hours * 3600)
    minutes = remainingSeconds / 60
    remainingSeconds = remainingSeconds - (minutes * 60)
    seconds = remainingSeconds

    display hours: minutes: seconds
*/

#include <iostream>

int main()
{
    int elaspedSeconds, hours, minutes, seconds, remainingSeconds;

    std::cout << "Enter remaining seconds: ";
    std::cin >> elaspedSeconds;

    hours = elaspedSeconds / 3600;
    remainingSeconds = elaspedSeconds - (hours * 3600);
    minutes = remainingSeconds / 60;
    remainingSeconds = remainingSeconds - (minutes * 60);
    seconds = remainingSeconds;

    if (hours < 9)
    {
        std::cout << 0;
    }
    std::cout << hours;

    std::cout << " : ";

    if (minutes < 9)
    {
        std::cout << 0;
    }
    std::cout << minutes;

    std::cout << " : ";

    if (seconds < 9)
    {
        std::cout << 0;
    }
    std::cout << seconds << std::endl;

    return 0;
}