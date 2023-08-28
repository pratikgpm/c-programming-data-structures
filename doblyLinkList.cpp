#include<iostream>
using namespace std;

struct node {
    int data ;
    struct node *next;
};

void traversal(struct node *head){
    struct node *ptr = new node;
    ptr  = head;
    // 1 2 3 
    do {
        cout<<"Data : "<<ptr->data<<endl;
        ptr = ptr->next;
    }while(ptr != head);
    cout<<endl;
}

struct node *insertStart(struct node * head , int dat){
    struct node * ptr = new node ;
    struct node *seco = new node;    
    ptr->data = dat;
    seco = head->next;
    //1 2 3
    while (seco->next != head)
    {
        seco = seco->next;
    }
    seco->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
    
}

struct node *insertEnd(struct node  *head ,int dat){
    struct node * ptr = new node ;
    struct node *seco = new node;
    ptr->data = dat;
    seco = head->next;
    while (seco->next != head)
    {
        seco  = seco->next;
    }
    seco ->next = ptr;
    ptr->next = head;
    return head;
    
}

struct node * insertIndex(struct node * head , int index,int dat){
    struct node *ptr = new node ;
    struct node *seco = new node;

    ptr ->data = dat;
    seco = head ;
    int ind = 0;
    // 0 1 2  
    while (ind<index-1)
    {
        seco = seco->next;
        ind ++;
    }
    ptr->next = seco->next;
    seco->next = ptr;
    return head;    
}



int main(){
    struct node *head  = new node ;
    struct node *first = new node;
    struct node * second = new node;
    head->data = 55;
    head->next  = first ;

    first ->data = 80;
    first ->next = second;

    second->data = 11;
    second->next = head;


    traversal(head);

    head = insertStart(head , 99);
    traversal(head);

    head = insertStart(head , 109);
    traversal(head);


    head = insertEnd(head , 499);
    traversal(head);

    head = insertIndex(head , 2,19);
    traversal(head);


    return 0;
}