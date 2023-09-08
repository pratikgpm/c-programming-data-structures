#include <iostream>
using namespace std;
void display(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertion_sort(int *a, int size)
{

    int key = 0;

    // size -1 because we are starting index  from 0
    //<= because we want to traverse till last element
    for (int i = 1; i <= size - 1; i++)
    // 34 | 1  13 8
    // 1  34 | 13 8
    // 1  13 34 | 8
    // 1  8  13 34
    {
        key = a[i];
        // for each loop
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] > key)
            {
                a[j + 1] = a[j];
                a[j] = key;
            }
        }
    }
}

int main()
{
    int a[] = {25, 5, 88, 1, 2, 13};
    int n = sizeof(a) / sizeof(int);
    display(a, n);
    insertion_sort(a, n);
    display(a, n);

    return 0;
}