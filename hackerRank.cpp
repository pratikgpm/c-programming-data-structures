#include<iostream>
#include<cmath>
using namespace std;
class mypoint{
    int x,y;
    public:
    mypoint(int a,int b);
    friend float dis(mypoint ,mypoint);
    mypoint(void);



};
mypoint :: mypoint(int a ,int b){
    x=a;
    y=b;
}
mypoint :: mypoint(void){
    cout <<"enter the X co-ordinate"<<endl;
    cin>>x;
    cout<<"enter the Y co-ordinate"<<endl;
    cin>>y;
}

float dis(mypoint a,mypoint b){
    //(x2 - x1)2 + (y2-y1)2
    float first = (a.x - b.x)*(a.x - b.x);
    float second = (a.y -  b.y) * (a.y -  b.y);
    float third =  first + second;
    float ans = sqrt(third);
    cout<<"the distance between two points is "<<ans<<endl;




}

int main(){
    mypoint fir(120,25);
    mypoint sec(15,98);
    dis(fir,sec);
    mypoint bg;
    mypoint dg;
    dis(bg,dg);

    return 0;
}