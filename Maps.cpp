#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    // Map is associative array
    map<string ,int> mymap;
    map<string ,int > :: iterator itr;
    mymap ["pratik"] = 22;
    mymap ["rahul"] = 96;
    mymap ["ajay"] = 83;
mymap.insert({{"raj",99} , {"Tejaswini",98}});
for(itr = mymap.begin() ; itr != mymap.end() ; itr++){
cout <<(*itr).first << " "<< (*itr).second<< endl;


}
cout<<"current size is : "<<mymap.size();

    return 0;
}