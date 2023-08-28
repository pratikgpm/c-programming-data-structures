#include <iostream>
using namespace std;
// now we modify this program using the TEMPLATE functionality
// using TEMPLATE we can later on declare the data type
// which gives the flexibility
template <class T>
class vect
{
public:
    T *arr;
    int size = 0;

    vect(int n) : size(n)
    {
        arr = new T[n];
    }
    T dotProduct(vect v)
    {
        int i;
        T sum = 0;
        for (i = 0; i < size; i++)
        {
            sum += this->arr[i] * v.arr[i];
        }

        return sum;
    }
};

int main()  

{
    vect<float> first(3);
    first.arr[0] = 1;
    first.arr[1] = 0;
    first.arr[2] = 4;

    vect<float> second(3);
    second.arr[0] = 1.5;
    second.arr[1] = 0.05;
    second.arr[2] = 4;

    float ans = 0;
    ans = first.dotProduct(second);
    cout << "Ans is : " << ans << endl;

    return 0;
}