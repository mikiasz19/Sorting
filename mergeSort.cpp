#include <iostream>
#include <cstdlib>
using namespace std;
/**
 *      SORTING ALGORITHM
 * step 1: start
 * step 2: declare array and left, right, mid variable
 * step 3: perform merge function.
    if left > right
        return
    mid= (left+right)/2
    mergesort(array, left, mid)
    mergesort(array, mid+1, right)
    merge(array, left, mid, right)
 * step 4: Stop
 Follow the steps below to solve the problem:
 MergeSort(arr[], l,  r)
If r > l
Find the middle point to divide the array into two halves:
middle m = l + (r – l)/2
Call mergeSort for first half:
Call mergeSort(arr, l, m)
Call mergeSort for second half:
Call mergeSort(arr, m + 1, r)
Merge the two halves sorted in steps 2 and 3:
Call merge(arr, l, m, r)
 */

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int array[], int left, int medium, int right)
{
    int i, j, k;
    int n1 = medium + 1 - left; // size from left to medium
    int n2 = right - medium;    // size from medium to left
    // lets create tempo arrays
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
    {
        L[i] = array[left + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = array[medium + 1 + j];
    }
    // merge the temp arrays
    i = 0;    // initial index of first sub array
    j = 0;    // initial index of second sub array
    k = left; // initial index of merged sub array
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            array[k] = L[i];
            i++;
        }
        else
        {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        array[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        array[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int array[], int left, int right)
{
    if (left < right)
    {
        int medium = left + (right - left) / 2;
        mergeSort(array, left, medium);
        mergeSort(array, medium + 1, right);
        merge(array, left, medium, right);
    }
}
void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
int main(void)
{
    int array[] = {5, 6, 4, 7, 3, 8, 2, 9, 1, 0};
    int size = sizeof(array) / sizeof(array[0]);
    mergeSort(array, 0, size - 1);
    print(array, size);
}