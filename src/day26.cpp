#include <iostream>

using namespace std;

int sumN(int n);

int main()
{
    int n;

    cout << "Enter Nth natural number: ";
    cin >> n;

    cout << "The sum of the first " << n << "th natural numbers is " << sumN(n) << endl;

    return 0;
}

int sumN(int n)
{
    return n * (n + 1) / 2;
}