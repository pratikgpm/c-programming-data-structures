#include <iostream>
#include <vector>

using namespace std;
template <class t>
void display(vector<t> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // cout<< v[i]<<" ";
        cout << v.at(i) << " ";
    }
}

int main()
{
    int cap;
    // ways to initialize the vector
    vector<int> v1; // zero length vector
    // vector<char> v2(4) - this is four length vector
    //  vector<int> v3(v1) - now this will contain the v1 as well
    // vector<iny> v4(6,13) - now this vector contains 6 for 13teen times
    cout << "enter the number of elements you want to put in vector : " << endl;
    cin >> cap;
    int ele = 0;
    for (int i = 0; i < cap; i++)
    {
        cout << "enter the element : " << endl;

        cin >> ele;
        v1.push_back(ele);
    }
    display(v1);
    v1.pop_back();
    cout << endl;
    display(v1);
    vector<int>::iterator iter = v1.begin();
    v1.insert(iter + 1, 10, 599);
    cout << endl;
    display(v1);

    return 0;
}