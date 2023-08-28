#include <iostream>
using namespace std;

// we can use multiple TEMPLATES just by seperating them using " , "
template <class t1 , class t2>
class myclass{
    public:
    t1 a;
    t2 b;
    myclass(t1 x , t2 y) : a(x) , b(y){

    }
    void disp(void){
        cout<<a << " and B is "<<b<<endl;
    }
};

int main(){
    myclass <int , float > ob(5,1.45);
    ob.disp();
    
    return 0;
}