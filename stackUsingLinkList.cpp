#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
int isEmpty(struct node *head)
{
    if (head == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct node *head)
{
    struct node *pt = new node;
    if (pt == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct node *push(struct node *head, int dat)
{
    if (isFull(head))
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        struct node *pt = new node;
        pt->data = dat;
        pt->next = head;
        head = pt;
        return head;
    }
}

struct node *pop(struct node *head){
    if(isEmpty(head)){
        cout<<"Stack is empty "<<endl;
        return 0;
    }
    else 
    {
        int dat =head->data;
        struct node *ptr = new node;
        ptr  = head;
        head = head->next;
        delete ptr;
        cout<<"Pop : "<<dat<<endl;
        return head;        
    }
}
void traversal(struct node *head){
    struct node *ptr = new node;
    ptr  = head;
    
    do
    {
        cout<<" Data is : "<<ptr->data<<endl;
        ptr = ptr->next;
    }while(ptr != NULL);
    cout<<endl;
    
}
int peek(struct node *top , int pos){
    struct node *ptr = new node;
    ptr = top;
    for (int i=0 ;(i<pos-1 && ptr!= NULL) ;i++){
        ptr = ptr->next;
    }
    if(ptr!= NULL){

    return ptr->data;
    }
    else {
        return -1;
    }
}

int main()
{
    struct node *head = new node;
    head = NULL;
    //head->data = 5;

    head  = push(head ,30);
    head  = push(head ,50);
    head  = push(head ,100);
    head  = push(head ,99);

    // traversal(head);
    // head = pop(head);
    // head = pop(head);
    // head = pop(head);
    // head = pop(head);
    // head = pop(head);
    // head = pop(head);
    // head = pop(head);
    // head = pop(head);
    // head = pop(head);
     traversal(head);
     cout<<"elemt at 1 is "<<peek(head,1)<<endl;
     cout<<"elemt at 2 is "<<peek(head,2)<<endl;
     cout<<"elemt at 3 is "<<peek(head,3)<<endl;
     cout<<"elemt at 4 is "<<peek(head,4)<<endl;



    return 0;
}