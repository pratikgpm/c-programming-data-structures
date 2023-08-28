#include<iostream>
#include<conio.h>
using namespace std;

class shop{
    int itemid[100];
    int itemprice[100];
    int counter;

    public:
    void setprice(void);
    void displayprice(void);
    void setcountrt(void){
        counter = 0;
    }
    friend float gstcal(shop aa);
    

};
void shop :: setprice(void){
    //int a ,b;
    cout << "enter the item ID : "<<endl;
    cin>>itemid[counter];
    cout << "enter the item Price "<<endl;
    cin>>itemprice[counter];

    // itemid[counter] = a;
    // itemprice[counter]= b;
     counter++; 
}

void shop :: displayprice(void){
    for (int i=0;i<counter;i++){
        cout<<"The Price for item ID "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}
float gstcal(shop aa){
     return aa.itemprice[0]*1.8;
}
int main (){
    shop dukan ;
    shop aa;
    dukan.setcountrt();
    // dukan.setprice();
    // dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();
    cout<< " the GST value for first is "<<gstcal(aa)<<endl;
    
    return 0;
}