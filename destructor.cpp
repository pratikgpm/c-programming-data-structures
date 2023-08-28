#include<iostream>
using namespace std;
int count = 1;
class num{

public:
num(void){
   count+=1;
    cout<<"constructor is called "<<count<<endl;
}
//this is how destructor is created
~num(void){
    count--;
    cout<<"destructor is called "<<count<<endl;
}
};
int main (){
    cout<<"main block is started "<<endl;
    num n1;
    {
        cout<<"now we are inside the block"<<endl;
        num n2,n3;
        cout<<"now two objects are created"<<endl;
    }
    cout<<"now we are outside the block"<<endl;
    num n4,n5;
    cout<<"return statment is abouty to execute"<<endl;
    return 0;

}