#include<iostream>
using namespace std;

int fact(int);
int fib (int);

int main (){
    int a;
    cout<<"enter the no :\n";
    cin>>a;
    cout<<"febonachi for no "<<a<< " is "<<fib(a);
    cout<<"\nfactorial for no "<<a<< " is "<<fact(a);

    return 0;
}
int fib(int a)
{
    if (a<2){
        return 1;
    }
    return fib(a-2)+fib(a-1);
}
int fact(int a ){
    if(a<=1){
       return 1;
    }   

    return a*fact(a-1);
}