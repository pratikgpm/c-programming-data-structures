#include<iostream>
using namespace std;

int sum(int,int);//function prototyping
void g(void);//function prototyping , void  inside the paranthesis is optional
int main (){
    // 15 and 16 are actual paramaters
    cout<<"the sum is "<<sum(15,16);
    g();

    return 0 ;
}
//formal parameters are actually taking values from actual parameters
int sum(int a, int b){
    return a+b;
}
void g (){
    cout<<"\nhello good morning";
}

