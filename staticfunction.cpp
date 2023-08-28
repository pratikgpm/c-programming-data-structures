#include <iostream>
using namespace std;

class fruits
{
    int rate;
    static int count;
    int trycount = 0;

public:
    void setrate(void)
    {

        cout << "enter the rate for mango " << endl;
        cin >> rate;
        count++;
        trycount++;
    }
    void showrate(void)
    {
        cout << "the rate for mango is " << rate << endl;
        cout << "the rates are change of the " << count << " time " << endl;
        cout << "the rates are ALSO CHANGE FOR " << trycount << " time " << endl;
    }
    static void getc(void)
    {
        cout << "the current count is " << count << endl; // static function can only call static value or variables
    }
    void showd(void);
};
void fruits ::showd(void)
{
    cout << "the trycount value is " << trycount << endl;
}

int fruits ::count = 0; // static values for call are declare outside the class

int main()
{
    fruits aa;
    fruits bb;
    fruits cc;
    fruits dd;
    aa.setrate();
    aa.setrate();
    bb.setrate();
    cc.setrate();
    dd.setrate();
    bb.showrate();

    return 0;
}