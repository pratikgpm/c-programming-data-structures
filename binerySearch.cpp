#include <iostream>
using namespace std;

int binery(int arr[], int targer, int size)
{
    int mid, first, last;
    first = 0;
    last = size - 1;
    mid = 0;
    while (first < last)
    {

        mid = ((first + last) / 2);

        if (arr[mid] == targer)
        {
            return mid;
        }
        else if (arr[mid] < targer)
        {
            first = mid + 1;
        }
        else if (arr[mid] > targer)
        {
            last = mid - 1;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{

    int arr[] = {1, 22, 33, 54, 85, 105, 204, 300, 585};
    int siz = sizeof(arr) / sizeof(arr[0]);
    int result;
    result = binery(arr, 585, siz);
    if (result == -1)
    {
        cout << "e;ement not found " << endl;
    }
    else
    {
        cout << "element found at INDEX " << result << endl;
    }
    return 0;
}