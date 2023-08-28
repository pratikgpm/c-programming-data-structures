#include <iostream>
using namespace std;

class A
{
protected:
    int roll_no = 0;

public:
    void set_roll_no(int a)
    {
        roll_no = a;
    }
};

class subjects : virtual protected A
{
protected:
    int maths, science;

public:
    void set_marks(int a, int b)
    {
        maths = a;
        science = b;
    }
};
// using keyword VIRTUAL at the time of inheritance where two classes are derive from same Base class 
// then a same element is derive(accessable) from both 
// then if a New class is Derive from this class then a ambiguity is generated 
//to resolve such ambiguity we use the VIRTUAL keyword
class sports :virtual protected A
{
protected:
    int grade;

public:
    void set_grade(int a)
    {
        grade = a;
    }
};

class result : protected subjects, protected sports
{
protected:
    float result;

public:
    void res(void)
    {
        int roll;
        int mat, sci,soc;
        float results;

        cout<<"enter the roll no :"<<endl;
        cin>>roll;
        cout<<"enter the  Maths marks :"<<endl;
        cin>>mat;
        cout<<"enter the Science marks :"<<endl;
        cin>>sci;
        cout<<"enter the Sport Grades :"<<endl;
        cin>>soc;
        set_roll_no(roll);
        set_marks(mat,sci);
        set_grade(soc);
        results = mat+sci+soc;
        results/=300;
        results*=100;
        cout<<"The Roll no "<<roll_no<<" have "<<maths<<" marks in Maths "<<science<<" in Science and "<<grade<<" in sports"<<endl;
        cout<<"Total Percentage is - "<<results<<endl;


    }

};

int main()
{
    result rr;
    rr.res();
    return 0;
}