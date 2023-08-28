#include <iostream>
using namespace std;
class apple{
    int a,b ;

    public:
    apple(void){

    }
    apple(int bb ,int b ){
       a=bb;
        cout <<"the value of A is "<<a<<" and the value of B is "<<b<<endl;
    }
    void setno(int zz){
        a=zz;
    }
    void sh(void){
        cout<<"the value of a is "<<a<<endl;
    }
};
int main(){
    //implicite call
    apple raj(15,12);
    raj.setno(2500);

    //explicite call
    apple pratik = apple(120,50);
    pratik.sh();
    raj.sh();
    apple tej;


    return 0;
}