#include<iostream>

using namespace std;
 struct employee{
        int id;
        char Batch ;
        float salery;
    };

    //using a shortcut of "typedef"
    typedef struct bus{
        int no;
        float speed;

    }bus;

int main()
{
    struct employee Pratik;
    Pratik.id = 00001;
    Pratik.Batch= 'c';
    Pratik.salery= 1250.52;

    cout<<"the id of employee pratik is "<<Pratik.id<<" comes from Batch "<<Pratik.Batch<<" having salery of Rs "<<Pratik.salery<<"\n";
    // cout<<"hello";

    //implementing "typedef" shortcut
    bus goregaon;
    goregaon.no= 346;
    goregaon.speed= 25.36;
    cout<<"the station bus no is "<<goregaon.no<<" which have maximum speed of "<<goregaon.speed;
    return 0;

}