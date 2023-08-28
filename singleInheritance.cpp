#include<iostream>
using namespace std;

class first{
    int data1;
    public:
    int data2 ;
    void setdata(void);
    int getdata1(void);
    int getdata2(void);
    

};
void first :: setdata(void){
    data1 = 10;
    data2 = 20;

}
int first :: getdata1(void){
    return data1;
}

int first :: getdata2(void){
    return data2;
}

class second : public first{
    int data3;
    public:
    void process(void);
    void display(void);
};

void second :: process(void){
    data3 = data2 * getdata1();
}

void second :: display(void)
{
    cout<<"the value of Dat 1 is "<<getdata1()<<endl;
    cout<<"the value of Data 2 is "<<data2<<endl;
    cout<<"the value of Data 3 is "<<data3<<endl;
}
int main(){
    second num;
    num.setdata();
    num.process();
    num.display();
    return 0;
}


/*
#include<iostream>
using namespace std;

class first{
    int data1;
    public:
    int data2 ;
    void setdata(void);
    int getdata1(void);
    int getdata2(void);
    

};
void first :: setdata(void){
    data1 = 10;
    data2 = 20;

}
int first :: getdata1(void){
    return data1;
}

int first :: getdata2(void){
    return data2;
}

//After inheriting the base class privately we need to call the base class public function inside the derive class public function 
Because the private data members can be access by its class functions 
So the "SetData" function of a base class need to call inside the function of derive class 
it cant be access directly just by using a object ot call the functuion     


class second : private first{
    int data3;
    public:
    void process(void);
    void display(void);
};

void second :: process(void){
    setdata();
    data3 = data2 * getdata1();
}

void second :: display(void)
{
    cout<<"the value of Dat 1 is "<<getdata1()<<endl;
    cout<<"the value of Data 2 is "<<data2<<endl;
    cout<<"the value of Data 3 is "<<data3<<endl;
}
int main(){
    second num;
   // num.setdata();
    num.process();
    num.display();
    return 0;
}

*/