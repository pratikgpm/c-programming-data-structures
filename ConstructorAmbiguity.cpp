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
    ~base1(void)
    {
        cout << "base 1 destructor is called" << endl;
    }
    base1(void)
    {
        cout << "Default constructor of calss 1 is called" << endl;
    }

    void showb1(void)
    {
        cout << "base 1 value is : " << b1 << endl;
    }
};

class base2
{
protected:
    int b2 = 0;

public:
    base2(int a)
    {
        b2 = a;
        cout << "base 2 constructor is called " << endl;
    }
    base2(void)
    {
        cout << "Default constructor of calss 2 is called" << endl;
    }
    ~base2(void)
    {
        cout << "base 2 destructor is called" << endl;
    }

    void showb2(void)
    {
        cout << "base 2 value is : " << b2 << endl;
    }
};

class derive : protected base1, protected base2
{
protected:
    int b3;

public:
    //calling base class constructor
    // presedence is from left to right
    // virtual class will get priority 
    derive(int a, int b, int c) : base1(b), base2(c)
    {
        b3 = a;
        cout << "base 3 constructor is called " << endl;
    }
    derive(void) : base1(), base2()
    {
        b3 = 0;
        cout << "Default constructor of calss 3 is called" << endl;
    }
    ~derive(void)
    {
        cout << "base 3 destructor is called" << endl;
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
    {
        derive der;
        der.show();
    }
    derive ddlj(12, 10, 20);
    ddlj.show();

    return 0;
}