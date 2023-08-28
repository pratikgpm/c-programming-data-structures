#include<iostream>
using namespace std;

class first {
protected :
int maths;

};

class second{
protected:
int science;

};

class third : protected first , protected second{
    protected:
    int total;
    int drawing;
    public:
    void getdata(void);
    void show(void);

};
void third :: getdata(void){

    cout<<"enter the Maths marks : "<<endl;
    cin>>maths;
    cout<<"enter the Maths Science : "<<endl;
    cin>>science;
    cout<<"enter the Maths Drawing : "<<endl;
    cin>>drawing;
    

}
void third :: show(void){
    total = maths + science + drawing;
    cout<<"The total is : "<<total<<endl;
}
int main (){
    third apple;
    apple.getdata();
    apple.show();
    return 0;
}