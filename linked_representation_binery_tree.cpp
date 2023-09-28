#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int dat)
{
    struct node *n = new struct node;
    n->data = dat;
    n->left = NULL;
    n->right = NULL;
    return n;
}

// PRE-ORDER traversal
// root - left - right
void display(struct node *head)
{
    if (head != NULL)
    {
        cout << head->data << " ";
        display(head->left);
        display(head->right);
    }
}

int main()
{

    struct node *root_node;
    struct node *n1;
    struct node *n2;
    struct node *n3;
    struct node *n4;


    root_node = create_node(55);
    n1 = create_node(10);
    n2 = create_node(65);
    n3 = create_node(64);
    n4 = create_node(99);

    // aligning the child nodes with respect to root node
    root_node->left = n1;
    root_node->right = n2;
    n2->left = n3;
    n3->right = n4;


    //    55
    //   /  \
    //  10  65
    //     /  \ 
    //    64  99
    display(root_node);

    return 0;
}