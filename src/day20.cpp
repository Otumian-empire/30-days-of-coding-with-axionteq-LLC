/*
problem definition:
	Find a item from a given sorted array
analysis:
	input:
		sorted array
		size of array
		search item
	output:
		index of search item
	process:
		let start and end be the position of the first and last element in the array
		loop from i t0 length / 2
			find the pivot (the middle element in the array), 
				pivot = (start + end) / 2
			check if the search item is the same as element at the pivot
				then return the pivot as the index of the search item
			else if the search item is greater than the element at the pivot
				then start = pivot and pivot = (start + end) / 2
			else the search item is less than the element at the pivot
				then end = pivot and pivot = (start + end) / 2
		return -1 if element is not found
design:
	if arr, length and searchItem are the inputs
	loop from i = 0 to length / 2
		pivot = (start + end) / 2
		if seachItem == arr[pivot]
			then return pivot
		else if searchItem > arr[pivot]
			then
				start = pivot
		else 
			then
				end = pivot
		pivot = (start + end) / 2
		
	return -1
*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int length, int searchItem);

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int length = 9;
	int searchItem = 1;

	cout << searchItem << " is at " << binarySearch(arr, length, searchItem)
		 << "th index of the array." << endl;

	return 0;
}

int binarySearch(int arr[], int length, int searchItem)
{
	int start = 0, end = length - 1, pivot;

	for (int i = 0; i < length / 2; i++)
	{
		pivot = (start + end) / 2;

		if (searchItem == arr[pivot])
		{
			return pivot;
		}
		else if (searchItem > arr[pivot])
		{
			start = pivot + 1;
		}
		else
		{
			end = pivot - 1;
		}
	}

	return -1;
}