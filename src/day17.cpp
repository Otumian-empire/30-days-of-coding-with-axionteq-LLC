#include <iostream>
using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
    int a, b;
    cout << "LOWEST COMMON MULTIPLE." << endl;
    cout << "-----------------------" << endl;
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "The LCM of " << a << " and " << b << " is: "
         << lcm(a, b) << endl;
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

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
