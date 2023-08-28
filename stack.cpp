#include <iostream>
using namespace std;

struct stack
{
    int top;
    int size;
    int *data;
};

int isFull(struct stack *str)
{
    if (str->top == str->size - 1)
    {
       
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack *str)
{
    if (str->top == -1)
    {
       
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr ,int dat){
    if(isFull(ptr)){
         cout << "Stack is full OVERFLOW" << endl;
    }
    else{
            ptr->top++;
            ptr->data[ptr->top] =dat;
    }
}

void pop(struct stack *ptr)
{
    if(isEmpty(ptr)){
             cout << "stack is empty UNDERFLOW" << endl;
    }
    else{
        int a = ptr->data[ptr->top];
        ptr->top --;
        cout<<a<<endl;
    }
}
int main()
{
    struct stack *st = new stack;
    st->top = -1;
    st->size = 10;
    st->data = new int[st->size];
    
    push(st,10);
    push(st,9);
    push(st,8);
    push(st,7);
    push(st,6);
    push(st,5);
    push(st,4);
    push(st,3);
    push(st,2);
    push(st,1);
    push(st,99);
    push(st,88);

    pop(st);
    pop(st);
    pop(st);
    pop(st);
    pop(st);
    pop(st);
    pop(st);
    pop(st);
    pop(st);
    pop(st);
    pop(st);

    return 0;
}