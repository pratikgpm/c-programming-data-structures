#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert_node(int dat)
{
    struct node *n = new struct node;
    n->data = dat;
    n->left = NULL;
    n->right = NULL;

    return n;
}

void in_order(struct node *head)
{
    if (head != NULL)
    {

        in_order(head->left);
        cout << head->data << " ";
        in_order(head->right);
    }
}

int tree_search(struct node *head, int dat)
{
    if (head != NULL)
    {

        if (tree_search(head->left, dat) != 0)
        {
            return 1;
        }
        else if (head->data == dat)
        {
            return 1;
        }
        else if (tree_search(head->right, dat) != 0)
        {
            return 1;
        }
    }
    else {
        return 0;
    }
}


int main()
{
    struct node *root_node;
    struct node *n1;
    struct node *n2;
    struct node *n3;
    struct node *n4;
    root_node = insert_node(50);
    n1 = insert_node(40);
    n2 = insert_node(60);
    n3 = insert_node(55);
    n4 = insert_node(65);

    root_node->left = n1;
    root_node->right = n2;
    n2->left = n3;
    n2->right = n4;

    //     50
    //    /  \
    //  40   60
    //      /  \ 
    //     55  65

    in_order(root_node);
    cout<<endl;
    cout<<tree_search(root_node,100)<<endl;
    return 0;
   

}