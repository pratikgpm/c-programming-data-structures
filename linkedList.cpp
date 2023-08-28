#include <iostream>
using namespace std;

struct node
{
    int data;
    //pointer of data type struct node 
    struct node *next;
};

void traversal(struct node *pt){
    while(pt!=NULL)
   { cout<<" value : "<<pt->data<<endl;
    //pointer pt will point the next pointer whose address is store in pt->next 
    pt = pt->next;
}
}

int main()
{

    // making the struct pointer
    struct node *head;
    // allocating them the struct node type equivalent space
    // so that the pointer can be a valid data type of STRUCT NODE
    head = new node;

    struct node *first;
    first = new node;

    struct node *second;
    second = new node;

    struct node *third;
    third = new node;

    // inserting the data using pointers
    head->data = 5;
    head->next = first;

    first->data = 27;
    first->next = second;

    second->data = 357;
    second->next = third;

    third->data = 82;
    third->next = NULL;

    //pass any pointer of struct we created above
    traversal(head);

    return 0;
}