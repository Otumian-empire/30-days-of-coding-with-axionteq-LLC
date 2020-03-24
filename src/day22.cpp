#include <iostream>

using namespace std;

void addF(int firstParam, int secondParam, int &sumOfParams);

int main()
{
    int x, y, z;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;
    addF(x, y, z);

    cout << z << endl;
    return 0;
}

void addF(int firstParam, int secondParam, int &sumOfParams)
{
    sumOfParams = firstParam + secondParam;
}