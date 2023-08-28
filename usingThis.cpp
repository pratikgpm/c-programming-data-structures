#include<iostream>
using namespace std;

class apple{
    protected:
    int a;

    public:
    void setData(int a){
        // if we use the same variable name for local variable and class variable
        //local variable have higher precidance than any other 
        this->a = a;
        cout<<"the value of A is "<<a;
    }
};
int main(){
    apple aa;
    aa.setData(55);
   

    return 0;
}