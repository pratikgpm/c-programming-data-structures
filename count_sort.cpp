#include<iostream>
using namespace std;


// we simply use one another array of size of the maximum element of first array (plus one)
// if 10 is the maximum number in the first array then we will creat anothe array of 10 + 1
// assign all the values of that second array by 0
// second[] = {0,0,0,0,0,0,0,0,0}
// whenever we found an element in first array 
// first [0] = 10;
// we simply increment the value in second array by 1 at the index of that value
// second [] = {0,0,0,0,0,0,0,0,0,0,1,0,0};
// such that at the end of array we left with second array as 
// second [] = {0,0,1,0,1,2,1,0,0,1};
// 1 represent the occurenc of that no in array 
// the non zero integers index is our real ans
void display(int *arr, int siz)
{
    for (int i = 0; i < siz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void count_sort(int arr[],int size){
    int max_element=0;
    for(int i = 0 ;i < size; i++){
        if(max_element < arr[i]){
            max_element = arr[i];
        }
    }
    max_element += 1;
    int tr[max_element];
    for (int  i = 0; i <= max_element+1; i++)
    {
        tr[i] = 0;
    }
    for(int i= 0;i<size;i++){
        int tm = arr[i] ;
        tr[tm] += 1;
    }
    int ii =0;
    int jj=0;
    while(ii < max_element){
        if(tr[ii] == 0){
            ii++;
        }
        if(tr[ii] > 0 ){
            arr[jj] = ii;
            tr[ii] -= 1;
            jj++;

        }
    }
   // display(tr,max_element);
    
}

int main(){
    int arr[] = {5, 10, 3, 4, 2, 7,3};
    int size = (sizeof(arr)) / (sizeof(arr[0]));
    display(arr,size);
    count_sort(arr,size);
    display(arr,size);
    return 0;
}