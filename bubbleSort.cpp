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
void bubbleSort(int *a, int size)
{
    int temp = 0;
    int state = 0;
    // for loop for iterations pr Rounds
    //-1 because we dont compare for our last element ,its already sorted
    for (int i = 0; i < size - 1; i++)
    {
        state = 1;
        // 55 12 98 27 55
        // for comparision in each pass
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                state = 0;
            }
        }
        if (state == 1)
        {
            return;
        }
    }
}

int main()
{
    int A[] = {5, 8, 21, 88, 1, 27, 85};
    int n = sizeof(A) / sizeof(int);

    display(A, n);
    bubbleSort(A, n);
    display(A, n);

    return 0;
}