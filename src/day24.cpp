/* Write a recursive function that takes as a parameter a nonnegative integer
and generates the following pattern of stars. If the nonnegative integer is 4,
then the pattern generated is:
****
***
**
*
*
**
***
****
 */

#include <iostream>

using namespace std;
void printStars(int num);

int main()
{
    int num = 0;
    cout << "Enter number of lines: ";
    cin >> num;

    if (num > 0 && num < 15)
    {
        system("clear"); // change "clear" to "cls" on windows
        printStars(num);
    }
    else
    {
        cout << "This program works for positive numbers greater than zero but less the 15." << endl;
    }

    return 0;
}

void printStars(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
