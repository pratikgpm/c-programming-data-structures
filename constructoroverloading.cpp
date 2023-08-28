#include<iostream>
using namespace std;

class complex {
    int a,b;
    public:
    complex(int x,int y);
    complex (int x);
    complex (void);
    void show(void);
};
complex :: complex (int x){
    a = x;
    b=0;

}
complex :: complex(int x,int y){
    a=x;
    b=y;
}
complex :: complex(void){
    a=50;
    b=20;
}

void complex :: show(void){
    cout <<"the value of A is "<<a<<" and the value of B is "<<b<<endl;
}

int main(){
    complex o1;
    complex o2(200);
    complex ob3(250,2500);
    o1.show();
    o2.show();
    ob3.show();
    
    return 0;
}