#include<iostream>

using namespace std;

//********** Variable Parsing //**********
// int main(){
//     int a= 10,b=5;
//     float x= 1.25;
//     cout<<"the value of A and B is : "<<a<<"  "<<b<<endl; 
//     cout<<"the size if int A is "<<sizeof(a)<<endl;
//     cout<<"the size of float x is : "<<sizeof(x)<<endl;
//     cout<<"after the conversion to int size will be :"<<sizeof(int(x))<<endl;
//     (int)x;
//     cout<<"the value of x is now :"<<int(x);    
    


//     return 0;
// }

//********** Control Structures //**********
// int main(){
//     int a , b;
//     b= 18;
//     cout<<"enter the value for a : "<<endl;
//     cin>>a;
//      switch (a){

//         case 10:
//         cout<<"you are a minor 10 ";
//         break;

//         case 18:
//         cout<<"eligible for drinking ";
//         break;

//         case 19:
//         cout<<"you are older than 18";
//         break;

//         default :
//         cout<<"criteria not defined";
//         break;


//      }

//     return 0 ;
// }


//********** Break and Continue //**********
// int main (){
//   for (int i =0; i <=40;i++){
//     if(i%2==0){
//         continue;
//     }
//     if (i>=30)
//     {
//         break; 
//     }
//     cout<<i<<endl;
    
//   }
//     return 0;
// }
//********** Pointers //**********
int main (){
    int a = 3;
    int *b = &a;
    cout<<"the value at a is : "<<a<<endl;
    cout<<"the value at A by pinter is : "<<*b<<endl;
    cout<<"the address of A by A is "<<&a<<endl;
    cout<<"the value of address by using pointer is "<<b<<endl;

    int **c = &b;
    cout<<"the address of b by b is "<<&b<<endl;
    cout<<"the address of b by c is "<<c<<endl;
    cout<<"value at b by c which is address hold by b  "<<*c<<endl;
    cout<<"the value hold at address a by b  "<<**c<<endl;
    return 0 ;
}


