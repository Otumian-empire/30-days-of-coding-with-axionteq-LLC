#include <iostream>
using namespace std;

// I will skip the analysis and design process

int gcd(int a, int b);

int main()
{
    int a, b;
    cout << "GREATEST COMMON DIVISOR." << endl;
    cout << "------------------------" << endl;
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "The GCD of " << a << " and " << b << " is: "
         << gcd(a, b) << endl;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
