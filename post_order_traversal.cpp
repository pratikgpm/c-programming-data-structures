#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * left;
    struct node *right;
};

struct node *insert_node(int dat){
    struct node *n = new struct node;
    n->data = dat;
    n->left = NULL;
    n->right = NULL;

    return n;
}

void post_order(struct node *head){
    if(head != NULL){
        post_order(head->left);
        post_order(head->right);
        cout<<head->data<<" ";
    }

}

void pre_order(struct node *head)
{
    if (head != NULL)
    {
        cout << head->data << " ";
        pre_order(head->left);
        pre_order(head->right);
    }
}

void in_order(struct node * head){
    if(head != NULL){
        in_order(head->left);
        cout<<head->data<<" ";
        in_order(head->right);
    }
}


int main(){

    struct node * root_node ;
    struct node * n1 ;
    struct node * n2;
    struct node * n3;
    struct node * n4;
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
    cout<<"Pre_order"<<endl;
    pre_order(root_node);
    cout<<endl;
    cout<<endl;
    cout<<"Post_order"<<endl;
    post_order(root_node);
    cout<<endl;
    cout<<endl;
    cout<<"In_order"<<endl;
    in_order(root_node);


    return 0;
}