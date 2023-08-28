#include<iostream>
using namespace std;
int prod(int,int);
//float intrest(int ,float = 0.7);

float intrest(int capital , float intres = 0.7){
    return capital*intres;
  }
 int main ()
 {
    cout<<"product is : "<<prod(2,1);
    cout<<"\nproduct is : "<<prod(2,1);
    cout<<"\nintrest with value is  is : "<<intrest(10000,2);
    cout<<"\nintrest without value is  is : "<<intrest(10000);
    

 
    return 0;
 }
  int prod(int a ,int b){
     static int c= 0 ;//this vexecute onlu at once
        c+=1;
        return a*b+c;
  }

  