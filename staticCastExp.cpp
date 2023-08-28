#include <iostream>
using namespace std;

int main(){

    int a  = 15;
    float b = 5.5;
    int ans = static_cast<float>(a/b);
    cout<<"ans ia "<<ans<<endl;
    return 0;
}