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

int is_binery_tree(struct node *head){
   static struct node * pre =NULL ;
  // pre = NULL;
   if(head != NULL){
    if(!is_binery_tree(head->left)){
        return 0;
    }
    if( pre != NULL && head->data <= pre->data ){
        return 0;
    }
    pre = head;
    return(is_binery_tree(head->right));
   }
   else {
    return 1;
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
    n4 = insert_node(45);

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

    cout<<is_binery_tree(root_node);
   
    return 0;
   

}