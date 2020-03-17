/* 
Problem definition:
    calculate and print the sum of all the natural numbers divisible by
        either 3 or 5

Analysis:
    Input: limit
    Output: sum of all the natural numbers divisible by either 3 or 5
    Process:
        Given limit of the natural number
        loop through the limit from 1
            and add all the numbers divisible by either 3 or 5,
                then display the sum
            
Design:
    Let sumN be the sum of all natural numbers divisible by either 3 or 5
        of type integer, initialized to 0
    Let userLimit be the limit set by the user, of type integer

    prompt user for userLimit
    
    loop from n = 1 to userLimit
        if n divisible either 3 or 5
            sumN = sumN + n
    
    display sumN
*/

#include <iostream>
using namespace std;

int main()
{
    int sumN = 0, userLimit;

    cout << "Enter the limit: ";
    cin >> userLimit;

    for (int n = 1; n < userLimit; n++)
    {
        if (n % 3 == 0 || n % 5 == 0)
        {
            sumN = sumN + n;
        }
    }

    cout << sumN << endl;

    return 0;
}