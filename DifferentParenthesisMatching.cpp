#include <iostream>
using namespace std;

struct stack
{
    int top;
    int size;
    char *arr;
};

int isEmpty(struct stack *nod)
{
    if (nod->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *nod)
{
    if (nod->top >= nod->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *node, char a)
{
    if (isFull(node))
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        node->top++;
        node->arr[node->top] = a;
    }
}

char pop(struct stack *node)
{
    if (isEmpty(node))
    {
        cout << "Stack UNDERFLOW" << endl;
        
    }
    else
    {
        char ch = node->arr[node->top];
        node->top--;
        return ch;
    }
}

int checkEquation(string aa)
{
    int len = aa.length();
    struct stack *node = new stack;

    node->size = len;
    node->top = -1;
    node->arr = new char[node->size];

    for (int i = 0; i < len; i++)
    {
        if (aa[i] == '(' || aa[i] == '[' || aa[i] == '{')
        {
            push(node, aa[i]);
        }
        else if (aa[i] == ')' || aa[i] == ']' || aa[i] == '}')
        {
            if(isEmpty(node)){
                return 0;
            }
            char check = pop(node);
            if (check == '(' && aa[i] == ')')
            {
                continue;
            }
            else if (check == '{' && aa[i] == '}')
            {
                continue;
            }
            else if (check == '[' && aa[i] == ']')
            {
                continue;
            }
            else
            {
                return 0;
            }
        }
    }
    if (node->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    string eq = "a+b(()c-s)";
    if (checkEquation(eq)==1)
    {
        cout << "Equation is Balance" << endl;
    }
    else
    {
        cout << "Equation is Not balance " << checkEquation(eq) << endl;
    }

    return 0;
}