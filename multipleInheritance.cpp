#include <iostream>
using namespace std;

class first{
    protected:
    int  roll_no;

};
//multiple inheritance
class second : protected first{
    protected :
    int maths,science;
};
//multiple inheritance
class third : protected second {
    
    public:

    void display(int a,int b,int c){
        roll_no = a;
        science = b;
        maths = c;
        float percentage = (science + maths);
        percentage /=2;
        cout<<"the roll no of student is "<<roll_no<<endl;
        cout<<"the marks in science is "<<science<<endl;
        cout<<"the markes in maths is "<<maths<<endl;
        cout<<"percentages are : "<<percentage<<endl;
    }

};

int main(){
    third pratik;
    pratik.display(44,92,85);
    
    

    return 0;
    
    }