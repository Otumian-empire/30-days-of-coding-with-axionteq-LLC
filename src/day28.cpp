#include <iostream>
#include <cmath>

using namespace std;

int fibonacci(int n)
{
    return (pow((1 + sqrt(5)), n) - pow((1 - sqrt(5)), n)) / (pow(2, n) * sqrt(5));
}

int main()
{
    int n;
    int i = 0;

    while (i < 10)
    {
        cout << "Enter n: ";
        cin >> n;

        cout << fibonacci(n) << endl;
        i++;
    }

    return 0;
}