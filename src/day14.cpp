/*
problem definition:
    find the roots of a quadratic equation
analysis:
    Given the quadratic equation of the form, ax^+bx+c=0,
        where a is not 0
        the roots of the equation are in the form
            x = (-b (+-) (b^2 - 4ac))^0.5) / 2a
        
        a and b are the co-efficients of x^2 and x, and c is a 
            constant

        input: a, b, c
        output: roots, x
        process: x = (-b (+-) (b^2 - 4ac))^0.5) / 2a
design:
    let a, b and c be the taken as real inputs
    and x1 and x2 the real roots of the equation.

    check to see if b^2 - 4ac < 0, making the roots undefined

    x1 = (-b + (b^2 - 4ac)^0.5) / 2a
    x2 = (-b - (b^2 - 4ac)^0.5) / 2a

    then display x1 and x2 as the roots of the equation
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, x1, x2, d;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    if (a != 0)
    {
        d = pow(b, 2) - (4 * a * c);

        if (d < 0)
        {
            cout << "The roots of the quadratic equation are: "
                 << (-1 * b) / (2 * a) << "+" << sqrt(-1 * d) / (2 * a) << "i"
                 << " and "
                 << (-1 * b) / (2 * a) << "-" << sqrt(-1 * d) / (2 * a) << "i"
                 << endl;
        }
        else
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);

            cout << "The roots of the quadratic equation are " << x1 << " and "
                 << x2 << endl;
        }
    }
    else
    {
        cout << "The equation is not a quadratic equation." << endl;
    }
    return 0;
}
