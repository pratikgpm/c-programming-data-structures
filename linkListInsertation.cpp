#include <iostream>
using namespace std;

// Insertation at begining()
// Insertation at end()
// Insertation in between()
// Insertation after node()

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << " element " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct node *insertationAtBegining(struct node *head, int dat)
{
    struct node *ptr = new node;

    ptr->data = dat;
    ptr->next = head;
    return ptr;
}

struct node *insertAtEnd(struct node *head, int dat)
{
    struct node *ptr = new node;
    ptr->data = dat;
    ptr->next = NULL;

    struct node *p = new node;
    p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    return head;
}

struct node *insertAtIndex(struct node *head, int dat, int index)
{
    struct node *ptr = new node;
    ptr->data = dat;

    struct node *p = new node;
    p = head;
    int indi = 0;
    while (indi < index - 1)
    {
        p = p->next;
        indi++;
    }
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct node *insertAfterNode(struct node *head , struct node *given ,int dat){
    struct node *ptr = new node;
    ptr-> data = dat;

    ptr->next= given->next;
    given->next = ptr;
    return head;

}

int main()
{

    struct node *head = new node;
    struct node *first = new node;
    struct node *second = new node;
    struct node *third = new node;

    head->data = 5;
    head->next = first;

    first->data = 10;
    first->next = second;

    second->data = 48;
    second->next = third;

    third->data = 92;
    third->next = NULL;

    traversal(head);
    cout << endl;
    head = insertationAtBegining(head, 177);
    traversal(head);

    cout << endl;
    head = insertAtEnd(head, 100);
    traversal(head);

    cout << endl;
    head = insertAtIndex(head, 200, 3);
    traversal(head);

    cout << endl;
    head = insertAfterNode(head, second,9993);
    traversal(head);

    return 0;
}