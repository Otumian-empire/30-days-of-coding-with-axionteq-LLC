#include <iostream>

using namespace std;

double harmonicSum(int n);

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "The Harmonic Sum of the first " << n << "th natural numbers is " << harmonicSum(n) << endl;

    return 0;
}

double harmonicSum(int n)
{
    double hSum = 0;

    for (int i = 1; i < n + 1; i++)
    {
        hSum += (1.0 / i);
    }

    return hSum;
}
