#include<iostream>
using namespace std;

class employee{
public :
int id; 
employee(int a){
    id= a;
}
employee (void){
    id=0;
}
};
//default visibility is private
//for Public : public data members of base class remains public in derive class
//for Private : public data members of base class become private in Derive class 
//No private members of Base can be inheriated in Devire class
class coder : public employee{
public:
int languageCode = 0;
void setc(int a){
    languageCode = a;
}
void display(void){
    cout<<"the employee ID is "<<id<<" and LanguageCode is "<<languageCode<<endl;
}
coder (int a){
    id= a;
}
coder(void){


}
};
int main(){ 

    coder pratik;
    pratik.setc(500);
    pratik.display();

    return 0;
}