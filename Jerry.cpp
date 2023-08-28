#include <iostream>
#include<vector>
using namespace std;

template <class T> // for dynamic allocation of datatype in 

int display(vector<T> &v){
    for (int i=0; i<v.size();i++){
        cout<<i+1<<" "<<"element is "<<" "<<v[i];

        cout<<endl;

    }
    return 0;
}

int mysize(vector<int> &b){
    cout<<"size of vector arrat is : "<<b.size()<<endl;
    return 0 ;
}
int main (){
    vector<int> v1;
    int count ;
    int choice;
    cout<<"enter the no of element ypu want to enter in the vector :";
    cin>>count;
    for (int i = 0; i <count ; i++){
        cout<<"enterthe no "<<i+1<<" :";
        cin>>choice;
        v1.push_back(choice);
       
    }
    display(v1);
    cout<<v1.size()<<endl;
    v1.pop_back();
    display(v1);
    mysize(v1);
    vector<int> :: iterator iter = v1.begin();
    v1.insert(iter+1,2, 255);
    display(v1);


    return 0;
}
