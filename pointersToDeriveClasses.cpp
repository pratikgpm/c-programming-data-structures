#include <iostream>
using namespace std;

class first
{
public:
    int var1 = 0;

    void showData(void)
    {
        cout << "First class var1 is :" << var1 << endl;
    }
};

class second : public first
{
public:
    int var2 = 0;

public:
    void showData(void)
    {
        cout << "Second class ref VAR1 is :" << var1 << endl;
        cout << "Second class ref VAR2 is :" << var2 << endl;
    }
};
int main()
{
    first obj_firs;
    second obj_second;
    // a pointer from FIRST class is pointing to the obj of SECOND class is valid in C
    // but the member function are called of that of POINTER class

    first *first_class_pointer = &obj_second;
    first_class_pointer->var1 = 55;
    first_class_pointer->showData();

    second *second_class_pointer = &obj_second;
    second_class_pointer->var1 = 99;
    second_class_pointer->var2 = 100;
    second_class_pointer->showData();

    return 0;
}