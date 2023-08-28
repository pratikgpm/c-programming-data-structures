#include <iostream>
using namespace std;

class A
{
protected:
    void say(void)
    {
        cout << "Hellow" << endl;
    }
};

class Base : protected A {
    public:
    void say(void){
        cout<<" salam rocky bahi "<<endl;
    }
};
//in multilevel inheritance the function with same name will get override in its derive class (get upgraded)as it define in its Derive class
class three : protected Base{
    public:
    void say(void){
        cout<<"now this will override"<<endl;
    }
};
int main()
{
    Base b;
    A aa;
    b.say();
    three jerry;
    jerry.say();

    return 0;
}