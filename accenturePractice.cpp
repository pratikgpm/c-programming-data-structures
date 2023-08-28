#include <iostream>
using namespace std;

// FOR REVERSING A NUMBER
// int main(){
//     int n;
//     cout<<"enter a number " <<endl;
//     cin>>n;
//     int reminder = 0;
//     int carry = 0;
//     while (n!=0)
//     {
//         reminder = (reminder*10)+ (n%10);
//         n/= 10;
//     }
//     cout <<reminder<<endl;

//     return 0;
// }

// LINEAR SEARCH
int linear(int arr[], int target,int siz)
{
    int index = -1;
    int maxx = 0;
    //maxx = sizeof(arr) / sizeof(int);
    for (int i = 0; i < siz; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;

        }
       
    }
    return index;
}

int main()
{
    int ar[] = {11, 2, 55, 87, 99};
    int asize = sizeof(ar) / sizeof(ar[0]);
    int fin = 0;
    cout<<"Enter the Element you want to serch : "<<endl;
    cin>>fin;
    int ans = linear(ar, fin,asize);
    cout<<"the size is "<<asize<<endl;
    cout << "ans is " << ans << endl;

    return 0;
}
