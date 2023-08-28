#include <iostream>
#include <string>
using namespace std;

struct stack
{
    int top;
    int size;
    char *arr;
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
    if (node->top >= node->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *node, char dat)
{
    if (isFull(node))
    {
        cout << "Stack Overflow" << endl;
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
        cout << "Uderflow";
    }
    else
    {

        node->top--;

    }
}
int CheckEquation(string eqation)
{
    struct stack *first = new stack;
    first->top = -1;
    first->size = 8;
    first->arr = new char[first->size];

    for (int i = 0; i < eqation.length(); i++)
    {
        if (eqation[i] == '(')
        {
            push(first, eqation[i]);
        }
        else if (eqation[i] == ')')
        {
            if (isEmpty(first))
            {
                //cout << "Equation is not bslance" << endl;
                return 0;
            }
            else
            {
                pop(first);
            }
        }
    }
    if (first->top == -1)
    {
        delete first;
        return 1;

    }
    else {
    delete first;
    return 0;
    }
}
int main()
{

    string aa = "((a+b)=c";
   
    if (CheckEquation(aa) == 1)
    {
        cout << "Equation is Balance" << endl;
    }
    else
    {
        cout << "equation is not balance";
    }
    return 0;
}