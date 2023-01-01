#include <iostream>
using namespace std;
/**
 * run a nested for loop to traverse the input array
 * using two variables i and j, such that 0<=i<n-1 and
 * 0<=j<n-i-1
 * if array[j] is greater than array[j+1] then 
 * swap these adjacent elements, else move on
 * print sorted arry
 */
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int *array, int *size)
{
    for (int i = 0; i < *size - 1; i++)
    {
        for (int j = 0; j < *size - i - 1; j++)
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
    bubbleSort(array, &size);
    print(array, &size);
}