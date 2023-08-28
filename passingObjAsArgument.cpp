#include<iostream>
using namespace std;
class employee{
    int sal = 20;
    int id;
    public:
    void setsal(int a);
    void setId(void);
    void show(void);
    void setsum(employee e1,employee e2);
};
void employee :: setsal(int a){
    sal = a;
}
void employee :: setId(void){
    cout<<"enter the employee Id :"<<endl;
    cin>>id;
}
void employee :: show(void){
    cout<<"\nthe salery of employee is ";
    cout<<sal;

}
void employee :: setsum(employee e1, employee e2){
    sal = e1.sal + e2.sal;
}
int main(){
    employee arr[4],aa;
    arr[1].show();
   // employee aa,bb;
    arr[1].setsal(250);
    arr[2].setsal(250);
    arr[1].show();
    arr[3].setsum(arr[1],arr[2]);
    arr[3].show();
    return 0;
}