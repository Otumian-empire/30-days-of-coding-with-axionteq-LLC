#include <iostream>
using namespace std;

double mesqrt(double n);

int main()
{
    double num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "The approximated square root of " << num << " is " << mesqrt(num) << endl;
    return 0;
}

double mesqrt(double n)
{
    // We are using n itself as
    // initial approximation This
    // can definitely be improved
    // e decides the accuracy level

    double x, y, e = 0.00001;
    x = n;
    y = 1;

    while (x - y > e)
    {
        x = (x + y) / 2.0;
        y = n / x;
    }

    return x;
}