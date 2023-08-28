#include <iostream>
using namespace std;

class base1
{
protected:
    int b1 = 0;

public:
    base1(int a)
    {
        b1 = a;
        cout << "base 1 constructor is called " << endl;
    }

    base1(void){
        cout<<"default constructor is called"<<endl;
    }

    void showb1(void)
    {
        cout << "base 1 value is : " << b1 << endl;
    }
};

class base2 : virtual  base1
{
protected:
    int b2 = 0;

public:
    base2(int a) : base1()
    {
        b2 = a;
        cout << "base 2 constructor is called " << endl;
    }

    void showb2(void)
    {
        cout << "base 2 value is : " << b2 << endl;
    }
};

class derive : virtual protected base1,  protected base2
{
protected:
    int b3;

public:
    derive(int a, int b, int c) :  base1(c) ,base2(b)
    {
        b3 = a;
        cout << "base 3 constructor is called " << endl;
    }
   
   
    void show(void)
    {
        showb1();
        showb2();
        cout << "base 3 value is : " << b3 << endl;
    }
};
int main()
{
   
    derive ddlj(12, 10, 20);
    ddlj.show();

    return 0;
    //grgfergergerhg
}