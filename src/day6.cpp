/*
problem definition:
    implement the bubble sort algorithm
analysis:
    - given an array of size, n, we return a sorted array
    in the increasing order of magnitude
    - let int arr[n] be our array of size n
        we loop through the arr, n - 1, times and successively
        we swap the elements at arr[i] and arr[i + 1] if arr[i]
        is greater than arr[i + 1]
    - so we can have
        void bubbleSort(int arr[], int n);
            be the main sorting function
design:
    void bubbleSort(int arr[], int n):
        int temp;

        for i = 1 to n:
            for j = 0 to n - i:
                if arr[j] > arr[j + 1]:
                    temp = arr[j]
                    arr[j] = arr[j + 1]
                    arr[j + 1] = temp
*/

#include <iostream>

void bubbleSort(int arr[], int n);

int main()
{
    std::cout << "The Bubble sort algo..." << std::endl;

    int arr[] = {2, 4, 63, 1, 0, 12, -2};
    int sizeArr = 7;

    bubbleSort(arr, sizeArr);

    for (int i = 0; i < sizeArr; i++)
    {
        if (i < sizeArr - 1)
        {
            std::cout << arr[i] << ", ";
        }
        else
        {
            std::cout << arr[i] << std::endl;
        }
    }

    return 0;
}

void bubbleSort(int arr[], int n)
{
    int temp;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
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
