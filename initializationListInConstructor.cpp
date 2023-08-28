#include<iostream>
using namespace std;

class test{
    protected :
    int a ,b;
    public:
    //test(int i ,int j): b(i),a(j+5) - valid
    //test(int i ,int j): a(i),b(j) - valid
    
    // test(int i ,int j): b(i),a(j+b) - Not Valid
    // because althoug the b is first in assgnmet but in declaration part of variable in class
    //A is define first so the constructor will call for A fist and then for B 
    // so at time of initialization of values to A a(j+b) b value is not available 
    //because B constructor will execute afterwords 

    test(int i ,int j): b(i),a(j+5)
    {
        cout<<"constructor is called"<<endl;
        cout<<"A is : "<<a<<" and B is :"<<b<<endl;

    }
};

int main(){
    test t1(5,10);


    return 0;
}