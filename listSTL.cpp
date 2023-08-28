#include<iostream>
#include<list>
using namespace std;

   void display(list<int> &li){

    list<int> :: iterator itr ;
    for (itr = li.begin(); itr !=li.end() ; itr++)
    {
        cout<<*itr<< " ";
    }
    cout<<endl;
    
   } 
    
int main(){
    list<int> l1(7); // declare length list

    list<int> l2; // zero length list
 
    l2.push_back(5);
    l2.push_back(8);
    l2.push_back(15);
    l2.push_back(29);
    l2.push_back(78);

    display(l2);

    list<int> :: iterator itr;
    itr = l1.begin();
    *itr = 45;
    *itr++;
    *itr = 5;
    *itr++;
    *itr = 89;
    *itr++;
    *itr = 785;
    *itr++;

    display(l1);
    // l1.pop_back(); - to delete the last elememt
    // l1.pop_front(); - to delete the first element


    // to remove the element from list
    l1.remove(0);
    
    display(l1);

    l1.sort();
    display(l1);

    l1.merge(l2);
    display(l1);

    l1.reverse();
    display(l1);





    return 0;
}