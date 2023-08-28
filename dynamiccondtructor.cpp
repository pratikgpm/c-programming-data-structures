#include<iostream>
using namespace std;

class bank {
    int capital=0;
    int time=0;
    int intrest=0;
    float return_amount=0;
    float interest_rate=0;
    public :
    bank(int a,int b,int c);
    bank(int a,int b,float d);
    bank(void){

    }
    void show(void);

};

 void bank :: show(void){
    cout<<"The Capital of amount "<<capital<<" after "<<time<<" Years will be "<<return_amount<<endl;
 }
bank::  bank(int a,int b,int c){
    capital = a;
    time = b;
    intrest = c;
    return_amount = a;
    for (int i=0 ;i<time;i++)
    {
        // ret =1000+
        //prn/100 w amt = p*1+r/100)11
        return_amount += (return_amount * float(intrest)/100);
    }
    
}
bank ::bank(int a , int b ,float d){
    capital =a;
    time =b;
    interest_rate = d;
    for(int i= 0;i<time;i++){
        return_amount = capital+(capital*interest_rate);
    }
}
int main(){
   int cap,time,per;
   float rate;
   cout<<"enter the amount and time period with interest in percent"<<endl;
   cin>>cap>>time>>per;
   bank customer1;
   customer1=bank(cap,time,per);
   customer1.show();
    bank customer2;
    cout<<"enter the amount and time period with interest in Rate"<<endl;
   cin>>cap>>time>>rate;
   //dynamic initialization of objects
   customer2=bank(cap,time,rate);
   customer2.show();


    return 0;
    
    }