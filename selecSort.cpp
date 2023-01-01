#include <iostream>
using namespace std;
/**
 *       SORTING LOGICS
 * for i from 0 to n-1, find the smallest number between number[i] and number[n-1]
 * swap smallest number with number[i] 
 * best case scenario n^2
 * worst case scenario n^2
 */
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selecSort(int *array, int *size)
{
    for (int i = 0; i < *size - 1; i++)
    {
        for (int j = 0; j < *size - 1; j++)
        {
            if (array[j + 1] < array[j])
            {
                swap(&array[j + 1], &array[j]);
            }
        }
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
    int array[] = {5, 4, 6, 3, 7, 2, 8, 1, 9, 0};
    int size = sizeof(array) / sizeof(array[0]);
    selecSort(array, &size);
    print(array, &size);
}