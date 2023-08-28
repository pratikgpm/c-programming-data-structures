#include<iostream>
using namespace std;


class first  {
    public:
    int var1 = 0;
//now by using virtual keyword (virtual function )we can override the proprty 
// now the even though we are using the base class pointer 
// but because it is pointing to the second class object 
// so now the second class obj will be called
    virtual void showData(void){
        cout<<"First class var1 is :"<<var1<<endl;
    }
};

class second : public first{
    public:
    int var2 = 0;
    virtual void showData(void){
        cout<<"SCCOND class var1 is : "<<var1<<endl;
        cout<<"SCCOND class var2 is : "<<var2<<endl;
    }
};

int main(){
    first first_obj;
    first *first_class_pointer;
    second second_obj;
    second *second_class_pointer;

    first_class_pointer = &second_obj;
    first_class_pointer->var1= 55;
    first_class_pointer->showData();

    

    
  
    return 0;
}