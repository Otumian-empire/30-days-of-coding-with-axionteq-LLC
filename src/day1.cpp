/*
Write a program to find the distance between point A and B,
taken the coordinates of A and B from the user.
Your code should return 5 for `A(1, 5)` and `B(5, 8)`.
You would need to include the `cmath` and `iostream` library or header files.
*/

/*
Problem definition:
    find the distance between two points, A and B
Analysis:
    If A and B are the points of ineterest, then
    let Ax and Ay, Bx and By be the xy-coordinates of A and B respectively.
    If D is the distance betweem A and B,
        then D = the square root of the sum of the squares of the differences
        between the x-coordinates and the y-coordinates
    Thus
        the inputs are Ax, Ay, Bx and By.
        the output will be D
        and D = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2))
Design:
    float Ax, Ay, Bx, By, D;

    output << "Enter x-coordinate for A: "
    input >> Ax

    output << "Enter y-coordinate for A: "
    input >> Ay

    output << "Enter x-coordinate for B: "
    input >> Bx

    output << "Enter y-coordinate for B: "
    input >> By

    D = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2))

    output << "The distance between A(" << Ax <<  ", " << Ay << ") and "
    << " B(" << Bx << ", " << By << ") is " << D << newline

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float Ax, Ay, Bx, By, D;

    cout << "Enter x-coordinate for A: ";
    cin >> Ax;

    cout << "Enter y-coordinate for A: ";
    cin >> Ay;

    cout << "Enter x-coordinate for B: ";
    cin >> Bx;

    cout << "Enter y-coordinate for B: ";
    cin >> By;

    D = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));

    cout << "The distance between A(" << Ax <<  ", " << Ay << ") and "
         << " B(" << Bx << ", " << By << ") is " << D << endl;

    return 0;
}
