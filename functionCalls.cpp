#include<iostream>
using namespace std;
void swap(int *,int*);//function prototyping
void swapref(int &,int &);//function prototyping
int main (){
    int a , b;
    a= 10;
    b=15;
    cout<<"the swap values are 10 15 to : "<<a<<" "<<b<<endl;  
    swap(&a,&b);  
    cout<<"the swap values are 10 15 to : "<<a<<" "<<b<<endl;    

    swapref(a,b);
    cout<<"\n return to original req "<<a<<" "<<b;




    return 0;
}
void swap(int *a, int *b){
    int temp = *a;
    *a= *b;
    *b= temp;
}

void swapref(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}

