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

void insertion_sort(int *a, int si)
{
    int key, j;
    // loop for range
    for (int i = 1; i < si; i++)
    {
        key = a[i];
        j = i - 1;
        // loop for comparison
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        // return the key value to the blank (dulicated value) space
        // 0  1 2 3  4
        // |  | | |  |
        // 2 15 8 27 11     first pass

        // 2 8 15 27 11     second pass
        // 2 8 15 27 11     third pass 
        //        j
        // 2 8 15 27 11     fourth pass
        //      j
        // 2 8 15 27 27     key = 11
        //   j
        // 2 8 15 15 27     now (arr[j]>key) .. while loop condition fails 
        //next line after while loop will exe
        
        a[j + 1] = key;
        //   j
        // 2 8 15 15 27
        // [j+1] = key
        //2 8 11 15 27    
    }
}

int main()
{
    int ar[] = {2, 52, 154, 5, 27, 13, 585, 88};
    int s = ((sizeof(ar)) / (sizeof(int)));
    cout << s << endl;
    display(ar, s);
    insertion_sort(ar, s);
    display(ar, s);
    return 0;
}