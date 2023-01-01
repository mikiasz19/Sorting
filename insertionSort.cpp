#include <iostream>
#include <cstdlib>
using namespace std;
/**
 *     SORTING ALGORTHM
 * iterate from array[1] to array[N] over the array
 * compare the current element (key) to its predecessor
 * if the key element is smaller than its predecessor, compare it
 * to the elements before. move the greater elements one
 * position up to make space for the swapped element.
 */
void insertionSort(int *array, int *size)
{
    int i, j, key;
    for (int i = 1; i < *size; i++)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}
void print(int *array, int *size)
{
    for (int i = 0; i < *size; i++)
    {
        cout << array[i] << " ";
    }
}
int main(void)
{
    int array[] = {5, 6, 4, 7, 3, 8, 2, 9, 1, 0};
    int size = sizeof(array) / sizeof(array[0]);
    insertionSort(array, &size);
    print(array, &size);

    return 0;
}