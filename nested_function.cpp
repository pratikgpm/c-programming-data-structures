#include <iostream>
using namespace std;

class binery
{
    string s;
    string b;

public:
    void read(void);
    void second_read(void);
    void check_binery(string a);
    void reverse(string a);
    void display(string a);
};

void binery ::read(void)
{
    cout << "enter the no" << endl;
    cin >> s;
    check_binery(s);
}
void binery ::second_read(void)
{
    cout << "enter the second value " << endl;
    cin >> b;
    check_binery(b);// Nesting of member function
    display(b);     // Nesting of member function
    reverse(b);     // Nesting of member function
    

}

void binery::check_binery(string a)
{
    bool ch = 1;
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) != '0' && a.at(i) != '1')
        {
            ch = 0;
            break;
        }
    }
    if (ch == 0)
    {
        cout << "This is not a valid Binery String " << endl;
    }
    else
    {
        cout << "This is a valid Binery String" << endl;
    }
}

void binery ::reverse(string a)
{
    cout<<"the reverse of the string is "<<endl;
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) == '0')
        {
            a.at(i) = '1';
        }
        else
        {
            a.at(i) = '0';
        }
    }
    display(a);
}

void binery :: display(string a){
    cout<<"current string is "<<a<<endl;


}

int main()
{
    binery pra;
    pra.read();
    pra.second_read();
    pra.check_binery("100010");
   

    return 0;
}