#include <iostream>
using namespace std;
 // this is how we can create default tamplates , when needed can change on time at time of object defination
template<class t1 = int , class t2 = float >
 class myclass {
    public:
    t1 a  ;
    t2 b ;

     myclass( t1 x, t2 y) : a(x), b(y){

     }
      
    void display( void){
        cout<< this->a << " and Value of B is "<< this->b<<endl;
    }

 };

 
int main(){
    myclass <> ab(5,5.5);
    ab.display();
    cout<<endl;

    myclass <float ,float> chh( 0.55,0.55);
    chh.display();


    return 0;

}