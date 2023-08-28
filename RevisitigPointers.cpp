#include<iostream>
#include<string>
using namespace std;



int main(){
    int a= 4;
    int *ptr = &a;
    cout<<"the value at A is "<<*ptr<<endl;
    cout<<"the address of A is "<<ptr<<endl;

// assigning the value directly to the pointer using NEW    keyword
    int *first;
    first = new int (50);
    cout<<"the value at pointer first is : "<<*first<<endl;
    cout<<"the value of new int 50 is "<<first<<endl;

    int *arr = new int [3];
    arr[0]=40;
    *(arr+1)=20;
    arr[2]= 30;
    //delete [] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;


     return 0;
}