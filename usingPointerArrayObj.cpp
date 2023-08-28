#include<iostream>
using namespace std;

class shopItems{
    protected:
    int id;
    float price;
    public:
    void setData(void){
        int a;
        float b;
        cout<<"Enter the ID : "<<endl;
        cin>>a;
        id= a;
        cout<<"Enter the Price for the Item :"<<endl;
        cin>>b;
        price = b;
    }

    void showData(void){
        cout<<"The item with ID "<<id<<endl;
        cout<<"Have Price of Rupee : "<<price<<endl;
    }
};
int main (){

    int size = 0;   
    cout<<"Enter the No of entries you want to make : "<<endl;
    cin>>size;

    
    shopItems *ptr = new shopItems[size];
    for (int i = 0 ;i < size ;i++){
        cout<<"Enter the values of Item :"<<i+1<<endl;
        ptr->setData();
        ptr++;
         }
        
    

    for(int i =0 ; i<size ; i++){
        ptr--;

    }
    for(int i =0 ; i<size ; i++){
        ptr->showData();
        ptr++;

    }
    return 0;
}