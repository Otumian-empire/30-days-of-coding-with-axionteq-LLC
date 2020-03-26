#include <iostream>

using namespace std;

int main()
{
    double weightInKg, weightInPd;

    cout << "Weight converter program(kg -> pounds)." << endl;
    cout << "---------------------------------------" << endl;

    cout << "Enter weight in kilograms: ";
    cin >> weightInKg;

    weightInPd = 2.2 * weightInKg;

    cout << weightInKg << "kg = " << weightInPd << "pounds" << endl;

    return 0;
}
