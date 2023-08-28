#include<iostream>
using namespace std;

typedef union  netValue
{
    int money ;
    char c;

}mystyle;


int main (){

    mystyle my;
   // my.money=255;
    my.c= 'b';
    cout<<"the value is "<<my.c<<"\n";

    // Enum 
    enum mytry {jerry ,tom,cat};
    cout<<"the value is "<<jerry<<endl;
    cout<<"the value is "<<tom<<endl;
    cout<<"the value is "<<cat<<endl;
    

    
    
    return 0;
}