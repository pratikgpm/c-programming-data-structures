#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void traversal(struct node *head)
{
    struct node *ptr = new node;
    ptr = head;
    while (ptr != NULL)
    {
        cout << "Data : " << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << endl;
}

void reverse(struct node *tail)
{
    struct node *ptr = new node;
    ptr = tail;
    while (ptr != NULL)
    {
        cout << "Data : " << ptr->data << endl;
        ptr = ptr->prev;
    }
    cout << endl;
}

struct node *insertIndex(struct node *head , int index,int dat){
    struct node *ptr = new node ;
    struct node *fir = new node;
    struct node *seco = new node;
    ptr ->data = dat;
    seco = head;
    int ind  = 0;
    while (ind < index-1)
    {
        seco = seco->next;
    }
    //0 1 2 3 
    ptr->next = seco->next;
    fir = seco->next;
    fir->prev = ptr;
    seco->next = ptr;
    ptr->prev = seco;

    return head;
    
}
int main()
{

    struct node *head;
    head = new node;
    struct node *first = new node;
    struct node *secon = new node;

    head->data = 10;
    head->next = first;
    head->prev = NULL;

    first->data = 50;
    first->next = secon;
    first->prev = head;

    secon->data = 80;
    secon->next = NULL;
    secon->prev = first;

    traversal(head);
    reverse(secon);

    head = insertIndex(head,1,99);
    traversal(head);
    reverse(secon);
    return 0;
}