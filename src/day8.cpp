/*
problem definition:
    Implement a linear searching algorithm for a one dimensional
        and two dimensional array
analysis:
    - Basically have two functions, one for the 1D array and the other
        for the 2D array
    - We pass the array and its size as argument to the function
        we display/return the index of the element if its in the said array
        else return -1
    - let int LSA1D(int arr[], int arrSize, int el) be the function definition
        for the linear search algorithm for the 1D array and 
        int LSA2D(int arr[][], int arrSizeRol, int arrSizeCol, int el) be the function definition
        for the linear search algorithm for the 2D array

    - LSAxD is the function name, where x is 1 or 2 for 1D or 2D respectively
    - arrSize is the size of the array
        for the 2D array, we need the the numbers of rows and cols
            arrSizeRol is the number of rows
            arrSizeCol is the number of cols
    - el is the element we are searching for in the arr

    - Loop through arr from 0 to arrSize and compare the el
        to the individual elements in the array, if el == an element in the 
        array, return the index of that element and terminate the program
        - for the 2D array we may require to return to values thus a pointer
            because we can not return an array

design:
    int LSA1D(int arr[], int arrSize, int el) {
        loop from i = 0 to arrSize
            if el == arr[i]
                return i
        
        return -1
    }


    int LSA2D(int arr[][], int arrSizeRow, int arrSizeCol, int el) {
        loop from i = 0 to arrSizeRow
            loop from j = 0 to arrSizeCol
                if el == arr[i][j]
                    display i and j
                    break the loop

        display -1
    }
*/

#include <iostream>

int LSA1D(int arr[], int arrSize, int el);

void LSA2D(int arr[2][5], int arrSizeRow, int arrSizeCol, int el);

int main()
{
    int arr[] = {3, 4, 6, 8, 1};
    int arrSize = 5;
    int el;
    int result;

    std::cout << "enter the value you want to find in 1D: ";
    std::cin >> el;

    result = LSA1D(arr, arrSize, el);

    if (result != -1)
    {
        std::cout << el << " is in array at index " << result << std::endl;
    }
    else
    {
        std::cout << el << " is not in array" << std::endl;
    }

    int arr2D[2][5] = {{3, 4, 6, 8, 1}, {9, 2, 0, 7, 5}};
    int arrSizeRow = 2;
    int arrSizeCol = 5;

    el = '\0';

    std::cout << "enter the value you want to find in 2D: ";
    std::cin >> el;

    LSA2D(arr2D, arrSizeRow, arrSizeCol, el);

    return 0;
}

int LSA1D(int arr[], int arrSize, int el)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == el)
        {
            return i;
        }
    }

    return -1;
}

void LSA2D(int arr[2][5], int arrSizeRow, int arrSizeCol, int el)
{
    for (int i = 0; i < arrSizeRow; i++)
    {
        for (int j = 0; j < arrSizeCol; j++)
        {
            if (arr[i][j] == el)
            {
                std::cout << el << " is in array at index [" << i << " ," << j << "] " << std::endl;
                return;
            }
        }
    }

    std::cout << el << " is not in array" << std::endl;
}