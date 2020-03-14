/*
problem definition:
    write a program to find the sum of the minimum and maximum value of a given array
analysis:
    input: array and its size
    output: sum of the minimum and maximum value
    process: 
        - sort the array
        - get the minimum value
        - get the maximum value
        - sum the minimum and maximum value
        - return the sum
design:
    let arr be the array of size n, where is an int
    let minVal, maxVal and sumMinMax be the minimum, maximum and sum of the minimum and maximum
        values, all of types int

    sort the array

    minVal = first element in sorted array
    maxVal = last element in sorted array

    sumMixMax = minVal + maxVal

    display -> sumMinMax

*/

#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n);

int main()
{
    int n = 7, arr[] = {2, 4, 63, 1, 0, 12, -2};

    int minVal, maxVal, sumMinMax;

    bubbleSort(arr, n);

    minVal = arr[0];
    maxVal = arr[n - 1];
    sumMinMax = minVal + maxVal;

    cout << "SumMinMax = " << sumMinMax << endl;

    return 0;
}

void bubbleSort(int arr[], int n)
{
    int temp;

    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
