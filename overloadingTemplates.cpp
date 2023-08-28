#include <iostream>
using namespace std;

template <class t>
class myclass{
    public:
    t  apl;

    myclass( t x): apl(x){}

    void display(void);
    void setter(int a)
    {
        cout<<"default INT  function is "<<a<<endl;
    }
    void setter(t bb){
        cout<<" the DYNAMIC value is : "<<bb<<endl;
    }

};

template <class t>
void myclass <t>::display(void){
    cout<<" the value of class variable is : "<<apl<<endl;
}

template<class t>
void tt(t bbw){
    cout<<"when val is dynamic "<<bbw<<endl;

}
// Default value takes the priority over the dynamic TEMPLATE function
void tt( int aab){
    cout<<"when INT is default : "<<aab<<endl;
}



int main(){
    myclass <float> first(55);
    first.display();
    first.setter(5);
    //first.setter(55); vjjvjjvvvjjj

// FUNCTION OVERLOADING gives priority to the DECLARE parameter function
    tt(5);
    tt(58.5);

    return 0;
}