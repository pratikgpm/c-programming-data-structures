#include <iostream>
using namespace std;
class b;
class a
{
    int val1=0;
    friend void myswap(a &,b &);
public:
    void setval(int a);
    void show(void);


} ;

class b{
    int val2=0;
    friend void myswap(a &,b &);
    public :
    void setval(int a);
    void show(void);
};
void a :: setval(int a){
    val1 = a;
}
void a :: show(void){
    cout <<"the curremnt value A is "<<val1<<endl;
}
void b :: setval(int a ){
    val2 = a;
}
void b :: show(void){
    cout<<"the current value B is "<<val2<<endl;
}
void myswap(a &x ,b &y){
    int temp = x.val1;
    x.val1= y.val2;
    y.val2 = temp;
}

int main()
{
    a aa;
    b bb;
    aa.setval(200);
    aa.show();
    bb.setval(500);
    bb.show();
    myswap(aa,bb);
    aa.show();
    bb.show();
    return 0;
}