#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};

void in_order(struct node *head)
{
    if (head != NULL)
    {
        in_order(head->left);
        cout << head->data<<" ";
        in_order(head->right);
    }
}

int max(int a, int b)
{
    return a > b ? a : b;
}

int get_height(struct node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    else
    {
        return head->height;
    }
}

struct node *create_node(int dat)
{
    struct node *head = new node;
    head->data = dat;
    head->left = NULL;
    head->right = NULL;
    head->height = 1;
    return head;
}
int get_balance_factor(struct node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    else
    {
        return get_height(head->left) - get_height(head->right) + 1;
    }
}

struct node *right_rotate(struct node *y)
{
    struct node *tmp1 = y->left;
    struct node *tmp2 = tmp1->right;
    tmp1->right = y;
    y->left = tmp2;

    y->height = max(get_height(y->left), get_height(y->right)) + 1;
    tmp1->height = max(get_height(tmp1->left), get_height(tmp1->right)) + 1;

    return tmp1;
}

struct node *left_rotate(struct node *head)
{
    struct node *tmp1 = head->right;
    struct node *tmp2 = tmp1->left;
    tmp1->left = head;
    head->right = tmp2;
    head->height = max(get_height(head->left), get_height(head->right)) + 1;
    tmp1->height = max(get_height(tmp1->left), get_height(tmp1->right)) + 1;

    return tmp1;
}

struct node *insert(struct node *head, int dat)
{
    if (head == NULL)
    {
        return create_node(dat);
    }

    if (dat > head->data)
    {
        head->right = insert(head->right, dat);
        return head;
    }
    else if (dat < head->data)
    {
        head->left = insert(head->left, dat);
        return head;
    }

    head->height = 1 + max(get_height(head->left), get_height(head->right));

    int bf = get_balance_factor(head);
    // left left
    if (bf > 1 && head->left->data > dat)
    {
        right_rotate(head);
    }
    // right right
    else if (bf < -1 && head->right->data > dat)
    {
        left_rotate(head);
    }
    // left right

    else if (bf > 1 && head->left->data < dat)
    {
        head->left = left_rotate(head->left);
        right_rotate(head);
    }
    // right left
    else if (bf < -1 && head->right->data < dat)
    {
        head->right = right_rotate(head->right);
        left_rotate(head);
    }

    return head;
}

struct node *in_order_predecessor(struct node * head){
        head= head->left;
        while (head->right != NULL)
        {
            /* code */
            head = head->right;
        }
        return head;
}

struct node *deletion (struct node * head , int dat){
    struct node *dd = NULL;
    if(head == NULL ){
        return NULL;
    }

    if(head->left == NULL && head->right == NULL & head->data == dat){
        delete head;
        return NULL;
    }
    if(head->data > dat){
        head->left = deletion(head->left , dat);
    }
    else if(head->data < dat){
        head->right = deletion(head->right , dat);
    }
    else {
        dd = in_order_predecessor(head);
        head->data = dd->data;
        head->left = deletion(head->left , dd->data);

    }
}

int main()
{
    struct node *head = NULL;
    head = insert(head,55);
    head = insert(head,10);
    head = insert(head,14);
    head = insert(head,36);
    head = insert(head,88);
    head = insert(head,95);
    head = insert(head,42);
    in_order(head);
    deletion(head,55);
    cout<<endl;
    in_order(head);
    return 0;
}