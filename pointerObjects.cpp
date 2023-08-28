#include<iostream>
using namespace std;

class apple{
protected :
int a,b;
public:
void setdata(int i,int j);
void showdata(void);
};

void apple :: setdata(int i , int j) {
    a=i;
    b=j;

}

void apple :: showdata(void)
{
    cout<<"the value of A is "<<a<<endl;
    cout<<"the value of B is "<<b<<endl;
}
int main(){
    apple ab;
    ab.setdata(15,50);
    ab.showdata();
    apple *ptr = &ab;
    (*ptr).showdata();
// declaration of pointer will be done as *ptr BUT at time of access we can access as ptr->
    apple *ptr2 = new apple;
    ptr2->setdata(500,999);
    ptr2->showdata();


    return 0;
}