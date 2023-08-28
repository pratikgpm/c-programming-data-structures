#include <iostream>
#include <string>
using namespace std;

struct stack
{
    int top;
    int size;
    char *aa;
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
    if (node->top > node->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char pop(struct stack *node)
{
    char a;
    if (isEmpty(node))
    {
        cout << "nderflow" << endl;
    }
    else
    {
        a = node->aa[node->top];
        node->top--;
    }
    return a;
}

void push(struct stack *node, char c)
{
    if (isFull(node))
    {
        cout << "Overflow" << endl;
    }
    else
    {
        node->top++;
        node->aa[node->top] = c;
    }
}

int isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int precedence(char c)
{
    if (c == '*' || c == '/')
    {
        return 3;
    }
    else if (c == '+' || c == '-')
    {
        return 2;
    }
    else
    {
        return 1;
    }
}
char stackTop(struct stack *node)
{
    return node->aa[node->top];
}

char *postFix(string eq)
{
    char *temp = new char[eq.length() + 1];
    struct stack *node = new stack;
    node->top = -1;
    node->size = eq.length();
    node->aa = new char[node->size];
    int i = 0;
    int j = 0;

    while (eq[i] != '\0')
    {
        if (!isOperator(eq[i]))
        {
            temp[j] = eq[i];
            i++;
            j++;
        }
        else
        {
            if (precedence(eq[i]) > precedence(stackTop(node)))
            {

                push(node, eq[i]);
                i++;
            }
            else
            {
                temp[j] = pop(node);
                j++;
            }
        }
    }
    while (!isEmpty(node))
    {
        temp[j] = pop(node);
        j++;
    }
    temp[j] = '\0';
    return temp;
}
int main()
{
    string eqt = "a+b*d-f";
    cout << postFix(eqt);
    return 0 ;
}