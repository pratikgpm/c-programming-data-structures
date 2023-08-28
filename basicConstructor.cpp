#include<iostream>
using namespace std;

class cons{
    int a;
    int b;
    public:
    //declare in public 
    //have no return type
    //we can not refer to their objectss
    cons(void){
        a= 100;
        b=200;
    }
    void show(void);

};
class my{
    int a;
    int b;
    public:
    void show(void);

};

void cons :: show(void){
    cout<<"the vlaue of A is "<<a<<" and the value of B is "<<b<<endl;
    
}

void my :: show(void){
    cout<<"the vlaue of A is "<<a<<" and the value of B is "<<b<<endl;
}

int main(){
    cons raj,ritul;
    my a,b;
    raj.show();
    ritul.show();
    a.show();
    b.show();
    return 0 ; 
}