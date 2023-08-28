#include<iostream>
using namespace std;

class base{
    protected:
    void say()
{
    cout<<"hello world "<<endl;
}};

class derive{
    protected:
    void say(void){
        cout<<"kya bolti publick"<<endl;
    }
};
class merge : protected base, protected derive{
    int a = 0;
    //ambiguity resolution
    public :
    void say(void){
        base :: say();
        
    }


};

int main(){
    merge m1;
    m1.say();
    return 0;
}