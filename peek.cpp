#include <iostream>
using namespace std;

struct stack
{
    int top;
    int size;
    int *arr;
};

int isEmpty(struct stack *node)
{
    if (node->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *node)
{
    if ((node->top) > (node->size - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void stackTOp(struct stack *node){
    cout<<"stack top "<<node->top << " is "<<node->arr[node->top]<<endl;
    cout<<"Stack bottom is : "<<node->arr[0]<<endl;
}
void peek(struct stack *node, int position)
{
    // 1 2 3 4 [psotion]
    // 3 2 1 0 top
    if ((node->top - position + 1) < 0)
    {
        cout << "envalid position" << endl;
    }
    else
    {
        cout << " Element is : " << node->arr[node->top - position + 1] << endl;
    }
}
void push(struct stack *node, int dat)
{
    if (isFull(node))
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        node->top++;
        node->arr[node->top] = dat;
    }
}

void pop(struct stack *node)
{
    if (isEmpty(node))
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        int temp = node->arr[node->top];
        node->top--;
        cout << "value is : " << temp << endl;
    }
}
int main()
{
    struct stack *node;
    node->top = -1;
    node->size = 10;
    node->arr = new int[node->size];
    push(node, 10);
    push(node, 20);
    push(node, 40);
    push(node, 60);
    push(node, 80);
    for (int i = 1; i <= node->top + 1; i++)
    {
        cout<<" Element at "<< i << " is : ";
        peek(node , i);
        
    }
    stackTOp(node);

    pop(node);
    pop(node);
    pop(node);
    pop(node);
    pop(node);
    pop(node);
    pop(node);
    return 0;
}
