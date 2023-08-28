#include<iostream>
#include<functional>
#include<algorithm>


using namespace std;

void display(int arr[],int siz){
    
for(int i= 0 ;i<siz;i++)
    {
    cout<<arr[i]<<" ";
        }
        cout<<endl;
    
}


int main(){
    int arr[]={55,17,8,56,98,1};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    // here in this part the " greater<int>()" is a function but now passed as a object 
    // it is also called as FUNCTOR
    sort(arr,arr+6,greater<int>());
    display(arr,size);

    return 0;
}