#include <iostream>
using namespace std;
class employee
{
    int sal;

public:
    friend employee  gstcal(employee a);
    void setsal(int a);
    void show(void);
};

void employee ::setsal(int a)
{
    sal = a;
}

employee gstcal(employee a)
{
    float ans;
    ans =a.sal - (a.sal * 0.18);
    cout<<"the current sal of  employee is "<<ans<<endl;
    


     
}
void employee :: show(void){
    cout<<"the current sal of  employee is "<<sal<<endl;
}
int main()
{
    employee e1, e2;
    
    e1.setsal(199);
    e2.setsal(500);
    e1.show();
    gstcal(e1);
   
    return 0;
}