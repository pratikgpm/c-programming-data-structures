#include <iostream>
#include<fstream>
using namespace std;
//cppIO.txt
int main (){
    string s1;
    string s2;

    ofstream likh("cppIO.txt");
    cout<<"Enter your name"<<endl;
    cin >> s1;
    likh<<"My name is "<<s1;
    
    likh.close();

    ifstream dede("cppIO.txt");
    getline(dede,s2);
    cout<<s2;
    dede.close();
    return 0;
}