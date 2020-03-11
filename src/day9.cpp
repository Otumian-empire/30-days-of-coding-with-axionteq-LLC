/* Implement the factorial algorithm. */

/*
problem definition:
    Implement the factorial algorithm.
analysis:
    Accept an integer number as input as x
    display the factorial of x
    return 1 if x is < 2 else return x * factorial of (x -1)
    Note this programs works for all values of x < 16
    change the type of factorial to long
design:
    let factorial(x) be the function definition of type integer 
        and x be an argument of type integer
    
    return x * factorial(x - 1)
*/

#include <iostream>

int factorial(int x);

int main()
{
    int x = 0;

    std::cout << "enter the value of x: ";
    std::cin >> x;

    std::cout << "The factorial(" << x << ") = " << factorial(x) << std::endl;

    return 0;
}

int factorial(int x)
{
    if (x < 2)
    {
        return 1;
    }

    return x * factorial(x - 1);
}