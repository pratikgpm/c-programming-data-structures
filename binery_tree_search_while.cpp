#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

};

struct node *create(int dat){
   struct  node *nod  = new struct node;
    nod->data = dat;
    nod->left = NULL;
    nod->right = NULL;

    return nod;
}

void in_order(struct node *head){
    if(head != NULL){
        in_order(head->left);
        cout<<head->data<<" ";
        in_order(head->right);
    }

}

// here in this example we are returning the node it self as result

struct node *search(struct node *head , int dat){
    while (head != NULL)
    {
        
        if(head->data == dat){
            return head;
        }
        else if(head->data > dat){
            head = head->left;
        }
        else{
            head = head->right;
        }
    }
    return NULL;
    
    
}

int main(){

    struct node * root_node;
    struct node * n1;
    struct node * n2;
    struct node * n3;
    struct node * n4;

    root_node = create(50);
    n1 = create(40);
    n2 = create(60);
    n3 = create(55);
    n4 = create(70);

    root_node->left = n1;
    root_node->right = n2;
    n2->left = n3;
    n2->right = n4;

    in_order(root_node);
    cout<<endl;

 struct node *tempp = search(root_node,55);
    if( tempp== NULL){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element found "<<tempp->data;
    }
    
    return 0;
}