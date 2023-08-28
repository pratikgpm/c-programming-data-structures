#include <iostream>
using namespace std;

class myclass
{
public:
    int a, b;
    void setdata(int x, int y);
    void getdata()
    {
        cout << "the value of a is " << a;
        cout << "\nthe value of b is " << b;
        cout << "\nthe value of c is " << c;
        cout << "\nthe value of d is " << d;
    }
    void getnum();

    

private:
    int c, d;
    
};

void myclass ::setdata(int x, int y)
{
    
    c = x;
    d = y;
}

void myclass :: getnum(){
    int x,y;
    cout<<"enter the first value "<<endl;
    cin>>x;
    cout<<"enter the secont value "<<endl;
    cin>>y;
    c=x;
    d=y;


}

int main()
{
    myclass mytry;
    mytry.a = 10;
    mytry.b = 20;
    mytry.getnum();
    //mytry.c= 500; c cant be access because it is declare private
   // mytry.setdata(50, 600);
    mytry.getdata();


    return 0;
}