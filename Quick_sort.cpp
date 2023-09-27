#include <iostream>
using namespace std;
void display(int *arr, int siz)
{
    for (int i = 0; i < siz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// partation function
int partation(int *arr, int low, int high, int pivo)
{
    int i = low;
    int j = low;
    // [low            heigh]
    // [ 5  12 6  8  2  4]
    // [i/j  1 2  3  4   p]

    // [ 5  12 6  8  2  4]
    // [ j   i 2  3  4  p]

    // [ 5  12 6  8  2  4]
    // [ j  1  i  3  4  p] ---(i++)

    // [ 5  12 6  8  2  4]
    // [ j  1  2  i  4  p]---(i++)

    // [ 5  12 6  8  2  4]
    // [ j  1  2  3  i  p]---(i++)

    // [ 2  12  6  8  5  4]
    // [ j   1  2  3  i  p]---(swap i/j)

    // [ 2  12  6  8  5  4]---(after swap i++ j++)
    // [ 0  j  2  3  i  p]

    // [ 2  12 6  8  5   4]
    // [ 0  j  2  3  4  i/p]---(i reach i<=high condition)

    while (i <= high)
    {
        if (arr[i] > pivo)
        {
            i++;
        }
        else
        {
            int temp = 0;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j++;
        }
    }
    return j - 1;
}

void quick_sort(int *arr, int low, int high)
{

    // recurssion
    if (low < high)
    {
        int pivot = arr[high];
        int pov = partation(arr, low, high, pivot);
        // recurssion
        quick_sort(arr, low, pov - 1);
        quick_sort(arr, pov + 1, high);
    }
}
int main()
{
    int arr[] = {5, 55, 25, 12, 88, 9, 13};
    int size = (sizeof(arr)) / (sizeof(arr[0]));
    display(arr, size);
    quick_sort(arr, 0, size - 1);
    display(arr, size);
    return 0;
}