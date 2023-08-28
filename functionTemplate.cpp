#include<iostream>
using namespace std;

// using this we can make our function retrurn type dynamic as well 
//static_cast is use to cast the data tupe
template<class u , class u1, class u2>
 u average ( u1 a , u2 b){
    return static_cast<u> ((a+b)/2);
 }

int main()
{
    float an = average<float>(5 , 3.2);
    cout<<"the ans is  : "<<an<<endl;
    return 0;

}