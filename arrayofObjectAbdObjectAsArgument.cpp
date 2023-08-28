#include <iostream>
using namespace std;
class emp
{
    int sal;
    int id;

    static int sta;

public:
    void setid(void);
    // void display(int a);
    void display(void);
    void displaystatic(void);
    void change(int a);
    bool findid(int a);
};
void emp ::setid(void)
{
    sal = 150;
    cout << "enter the id of emp " << endl;
    cin >> id;
    sta++;
}

//  void emp :: display(int a){
//     for (int i = 0;i<a;i++){
//         cout<<"the value at arr is "<<
//     }
//  }
void emp ::display(void)
{
    cout << "the value of ar is " << id << " and salery is " << sal << endl;
}

int emp ::sta = 100;

void emp::displaystatic(void)
{
    cout << "so the total value of count is " << sta << endl;
}
void emp ::change(int a)
{
    sal = a;
}
bool emp ::findid(int a)
{
    if (id == a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int temp = 0;
    int chg;

    cout << "enter the no of id you want to insert" << endl;
    cin >> temp;
    emp arr[temp];
    for (int i = 0; i < temp; i++)
    {
        arr[i].setid();
    }
    cout << "enter the employee id sal you want to change " << endl;
    cin >> chg;
    for (int i = 0; i < temp; i++)
    {
        if (chg <= temp && arr[i].findid(chg))
        {
            arr[i].change(988);
        }
        else
        {
            cout << "this emp id is not there in list" << endl;
           // return 0;
          // break;
        }
    }

    for (int i = 0; i < temp; i++)
    {
        arr[i].display();
    }

    arr[temp].displaystatic();
    return 0;
}