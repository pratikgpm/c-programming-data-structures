#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    ofstream wrt;// creating a object of ofstream 
    cout <<"Enter your Name :"<<endl;
    cin>>s1;
    wrt.open("cppIO.txt"); //using the open function to open the file
    wrt<<"\n My Name is "<<s1;
    wrt<<" \nMy Name is "<<s1;
    wrt<<" \nMy Name is "<<s1;
     

    wrt.close();

    ifstream rd;
    rd.open("cppIO.txt");
    //eof = end of file
    while (rd.eof() == 0 )
    {
    getline(rd,s2);
    cout<<s2<<endl;
        /* code */
    }
    rd.close();


    return 0;
}