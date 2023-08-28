#include <iostream>
using namespace std;

class first
{
public:
    int one, two;
    first(int i, int j) : one(i), two(j) {}
    // by doing this we are  forced to override this function in its derive classes
    virtual void display() = 0; // pure Virtual function

    // virtual void display(void){
    //     cout<<"First class one is :"<<one<<endl;
    //     cout<<"First class Two is :"<<two<<endl;

    // }
};

class second : public first
{
public:
    int three;
    second(int i, int j, int k) : first(i, j), three(k) {}
    // if there is no display function in this class then the base class VIRTUAL DISPLAY FUNCTION will called

    void display(void)
    {
        cout << "Second  class one is :" << one << endl;
        cout << "Second  class two is :" << two << endl;
        cout << "Second  class three is :" << three << endl;
    }
};

class third : public first
{
public:
    int four;
    third(int i, int j, int k) : first(i, j), four(k) {}
    void display(void)
    {
        cout << "third  class one is :" << one << endl;
        cout << "third  class two is :" << two << endl;
        cout << "third  class four is :" << four << endl;
    }
};

int main()
{
    // first fi(10,20) ;
    first *first_pointer;
    first *second_pointer;
    second se(11, 22, 33);
    third th(99, 88, 77);
    first_pointer = &se;
    first_pointer->display();
    second_pointer = &th;
    second_pointer->display();

    return 0;
}