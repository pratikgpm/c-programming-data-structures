#include <iostream>
using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void selection_sort(int *ar, int size)
{
    int minimum_index;
    int tmp;
    // 5

    // i    j
    // 0    1 2  3  4
    // 25 | 5 88 23 55
    for (int i = 0; i < size - 1; i++)
    {

        // for i = 0
        // i    j
        // 0    1 2  3  4
        // 25 | 5 88 23 55
        minimum_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (ar[minimum_index] > ar[j])
            {
                minimum_index = j;
            }
        }
        // swap
        // with this second for looop we get the index of small element
        // now we have to swap that element at the end of array
        // that is "i" here
        // minimum_index <--> i

        tmp = ar[minimum_index];
        ar[minimum_index] = ar[i];
        ar[i] = tmp;
    }
}
int main()
{
    int arr[] = {25, 5, 12, 99, 87, 54};
    int siz = (sizeof(arr)) / (sizeof(arr[0]));
    display(arr, siz);
    selection_sort(arr, siz);
    display(arr, siz);
    return 0;
}