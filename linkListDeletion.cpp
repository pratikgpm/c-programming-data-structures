#include <iostream>
using namespace std;

// deletion of first node()
// deletion of last node()
// deletion of a node in between()
// deletion of a node with a given value()

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    cout << endl;
    while (ptr != NULL)
    {
        cout << "Data : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct node *deletionAtFront(struct node *head)
{
    struct node *ptr = new node;
    ptr = head;
    head = head->next;
    delete ptr;
    return head;
}

struct node *deletionEnd(struct node *head)
{
    struct node *ptr = new node;
    struct node *seco = new node;
    seco = head->next;
    ptr = head;
    while (seco->next != NULL)
    {
        seco = seco->next;
        ptr = ptr->next;
    }
    ptr->next = NULL;
    delete seco;
    return head;
}
// DELETING NODE OF GIVEN INDEX USING WHILE LOOP
//  struct node *deleteAtIndex(struct node *head, int index)
//  {
//      struct node *ptr = new node;
//      ptr = head;
//      int strt = 0;
//      struct node *seco = new node;
//      while (strt < index - 1)
//      {
//          ptr = ptr->next;
//          strt++;
//      }
//      seco = ptr->next;
//      ptr->next = seco->next;
//      delete seco;
//      return head;
//  }

// DELETING NODE OF GIVEN INDEX USING FOR LOOP
struct node *deleteAtIndex(struct node *head, int index)
{
    struct node *ptr = new node;
    struct node *seco = new node;
    ptr = head;
    seco = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        ptr = ptr->next;
        seco = seco->next;
    }
    ptr->next = seco->next;
    delete seco;
    return head;
}

struct node *insertAtFront(struct node *head, int dat)
{
    struct node *ptr = new node;
    ptr->data = dat;
    ptr->next = head;
    return ptr;
}

struct node *deleteValue(struct node *head, int value)
{
    struct node *ptr = new node;
    struct node *seco = new node;
    ptr = head;
    seco = head->next;

    if (head->data == value)
    {
        head = head->next;
        delete ptr;
        return head;
    }
    else
    {
        // 1 3 4 5 6 sec 5
        // untill the element is match or untill we point to the null we keep moving forward
        while (seco->data != value && seco->next != NULL)
        {
            seco = seco->next;
            ptr = ptr->next;
        }
        // After comming out of the while loop either the elemet FOUND  or it points to the NULL
        if (seco->data == value)
        {
            // if it lies at the end of link list
            if (seco->next == NULL)
            {
                ptr->next = NULL;
                delete seco;
                return head;
            }
            // or it is in between the link list
            else
            {
                ptr->next = seco->next;
                delete seco;
                return head;
            }
        }
        // if element is not found means our while loops terminate because of pointing to the null
        else
        {
            cout << "element not present in linkList" << endl;
            return head;
        }
    }
}

int main()
{

    struct node *head = new node;
    struct node *first = new node;
    struct node *second = new node;
    struct node *third = new node;

    head->data = 8;
    head->next = first;

    first->data = 12;
    first->next = second;

    second->data = 55;
    second->next = third;

    third->data = 89;
    third->next = NULL;

    traversal(head);

    head = deletionAtFront(head);
    traversal(head);

    head = insertAtFront(head, 100);
    traversal(head);

    head = deleteAtIndex(head, 0);
    traversal(head);

    head = deletionEnd(head);
    traversal(head);

    head = insertAtFront(head, 85);
    head = insertAtFront(head, 95);
    head = insertAtFront(head, 89);
    traversal(head);

    head = deleteValue(head, 55);
    traversal(head);

    return 0;
}