#include <iostream>
using namespace std;
struct list
{
    int data;
    struct list *next;
};
// Global declaration of QUEUE
struct list *front = NULL;
struct list *rear = NULL;

void insert_element(void)
{
    int a;
    cout << "Enter the element : ";
    cin >> a;
    // condition can also state as 
    // if(front == NULL && rear == NULL)
    //but this condition become a loop hole after DEQUEUQ all elements from queue 
    // because we are moving FRONT and making NULL onward but not REAR 
    if (front == NULL)
    {
        //allocating memory for the first time
        rear = new list;
        front = new list;
        rear->data = a;
        rear->next = NULL;
        //necessary step to establish relation between FRONT and REAR
        front = rear;
    }
    else
    {
        struct list *temp = new list;
        temp->data = a;
        temp->next = NULL;
        rear->next = temp;
        rear = temp;
    }
}

void dispaly(struct list *head)
{
    head = new list;
    head = front;
     // if(front == NULL && rear == NULL)
    if (front == NULL)
    {
        cout << "List is empty " << endl;
    }

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int dequeuqe()
{
    int element = -1;
    struct list *temp = new list;
    temp = front;
    if (front == NULL)
    {
        cout << "Queue is empty " << endl;
        return element;
    }
    else
    {
        front = front->next;
        element = temp->data;
        //delete temp  - alternative syntax
        free(temp);
        return element;
    }
}

int main()
{
    dispaly(front);
    insert_element();
    insert_element();

    dispaly(front);
    cout << "pop element is : " << dequeuqe() << endl;
    cout << "pop element is : " << dequeuqe() << endl;
    cout << "pop element is : " << dequeuqe() << endl;
    cout << "pop element is : " << dequeuqe() << endl;
    cout << "pop element is : " << dequeuqe() << endl;
    dispaly(front);
    insert_element();
    insert_element();
    dispaly(front);
    return 0;
}