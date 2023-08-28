#include <iostream>
using namespace std;

class myclass{
    int a;
    int b;
    public:
    void display(void);
    myclass(void){
        a=0;
        b=0;
    }

    myclass(int aa,int bb=9){
        a=aa;
        b=bb;
    }

    myclass (myclass &obj){
        a=obj.a;
        b=obj.b;
    }


};

void myclass :: display(void){
    cout<<"the value of A is "<<a;
    cout<<" the value of B is "<<b<<endl;
}
int main(){ 
    myclass apple;
    myclass mango(120,499);
    myclass red(10);
    myclass rose(mango);
    apple.display();
    mango.display();
    rose.display();
    red.display();

    //copy constructor can be use in these two formats
    myclass tom =mango
    ;
    myclass bob(mango); 

    tom.display();
    bob.display();
    return 0;
}