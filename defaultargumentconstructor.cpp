#include <iostream>
using namespace std;

class sample{
    int a,b;
    public:
    //default value of Y is set to be 10 so whenever the object is created and no value of B is pass then  10 as the default value be set
    sample(int x , int y = 10){
        a= x;
        b=y;
    }
    sample(void){

    }
    void show(void);
};
void sample :: show(void){
    cout<<"the value of A is "<<a <<" and the value of B is "<<b<<endl;
}

int main(){

    sample obj1;
    sample obj2(10,25);
    sample obj3(250);//now as the second value is not provided so as the default value 10 will be set
    obj1.show();
    obj2.show();
    obj3.show();

    return 0;
}