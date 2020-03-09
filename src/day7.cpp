/*
Implement the peak algorithm, given an array and its size as argument
*/

/*
problem definition:
    Implement the peak algorithm, given an array and its size as argument
analysis:
    input: argument - array, arr and its size, n
    output: index of the elements that are peak
    process: compare element at index e, where e not 0 or (n - 1),
    so at e, check if arr[e] > arr[e - 1] and arr[e] > arr[e + 1]
    if so then there is a preak at e, thus return e
    when e = 0, look for the peak between arr[e] and arr[e + 1]
    when e = n - 1, look for the peak between arr[e] and arr[e - 1]
design:
    let int arr[] be the arr of interest
        int n be the size of arr[]

    loop from e = 0 to (n - 1)
        if e is 0
            if arr[e] > arr[e + 1]
                display e
            else
                do nothing
        else if e = n - 1
            if arr[e] > arr[e - 1]
                display e
            else
                do nothing
        else
            if arr[e] > arr[e - 1] and arr[e] > arr[e + 1]
                display e
            else
                do nothing
*/

#include <iostream>

void peak(int arr[], int n);

int main()
{
    int myArr[] = {1, 4, 3, 5, 2, 6};
    int arrSize = 6;

    peak(myArr, arrSize);

    std::cout << std::endl;

    int myArr1[] = {1, 2, 6, 4, 3, 5};
    int arrSize1 = 6;

    peak(myArr1, arrSize1);

    return 0;
}

void peak(int arr[], int n)
{
    for (int e = 0; e < n; e++)
    {
        if (e == 0)
        {
            if (arr[e] > arr[e + 1])
            {
                std::cout << e << " ";
            }
        }
        else if (e == (n - 1))
        {
            if (arr[e] > arr[e - 1])
            {
                std::cout << e << " ";
            }
        }
        else
        {
            if (arr[e] > arr[e - 1] && arr[e] > arr[e + 1])
            {
                std::cout << e << " ";
            }
        }
    }

    std::cout << std::endl;
}
