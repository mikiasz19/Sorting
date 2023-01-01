#include <iostream>
#include <cstdlib>
using namespace std;
/**
 *       SORTING LOGICS
 * comparing the i and i+1(j)
 * then set (j>i) or (i>j) as a condition
 * swapping
 */
int main(void)
{
    int a[10] = {5, 4, 6, 3, 7, 2, 8, 1, 9, 0};
    cout << "Before sorted: ";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[j] > a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "After sorted: ";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
}