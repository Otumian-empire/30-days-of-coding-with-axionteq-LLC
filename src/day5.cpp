/* Write a function that takes three reals as arguments and returns the max */
/*
    problem definition:
        write a function that takes 3 double arguments and return the maximum
    analysis:
        Let the 3 doubles be x, y and z and the output be p. thus p is the max
        the function accepts x, y and z as arguments
    design:
        function prototype:
            double maxDouble(double x, double y, double z);
        function implementation:
            double maxDouble(double x, double y, double z)
                let double p = x

                if (y > x)
                    p = y
                if (z > p)
                    p = z
*/

#include <iostream>

double maxDouble(double x, double y, double z);

int main()
{
    double x, y, z;

    std::cout << "enter the 3 number seperated by space: ";
    std::cin >> x >> y >> z;

    std::cout << "The maximum of the 3 reals is " << maxDouble(x, y, z) << std::endl;

    return 0;
}

double maxDouble(double x, double y, double z)
{
    double p = x;

    if (y > x)
    {
        p = y;
    }

    if (z > p)
    {
        p = z;
    }

    return p;
}
