/*
problem definition:
    create that performs calculations
analysis:
    input: the two numbers and the operator
    output: the result of the computation
    process: 
        take two numbers from the user and an operator,
        so if lets say the numbers are x and y and the operator
            was  `+`, then you return, x+y
design:
    Let x and y number two numbers and op be the operator
    OUTPUT-> "enter x"
    INPUT->x
    OUTPUT-> "enter y"
    INPUT->y
    OUTPUT-> "enter op"
    INPUT->op

    check the operator if its one of , {-, +, *}, then do, x op y
    if the operator is one of {/, %}, check that y is not 0, then do,  x op y
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    float result;
    char op;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    cout << "Enter op: ";
    cin >> op;

    if (op == '+')
    {
        result = x + y;
    }
    else if (op == '-')
    {
        result = x - y;
    }
    else if (op == '*')
    {
        result = x * y;
    }
    else if (op == '/')
    {
        if (y != 0)
        {
            result = x / (y * 1.0);
        }
    }
    else if (op == '%')
    {
        if (y != 0)
        {
            result = x % y;
        }
    }

    if (y == 0 && (op == '/' || op == '%'))
    {
        cout << "ZeroDivisionError - can not divide by zero" << endl;
    }
    else
    {
        cout << x << " " << op << " " << y << " = " << result << endl;
    }

    return 0;
}
