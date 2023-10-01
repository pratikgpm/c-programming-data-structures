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

void insert(struct node * head ,int dat){
    // here we make a node PREV  which stays at the previous node 


    struct node * prev = NULL;
    while (head != NULL)
    {
        prev = head;
        if(head->data == dat){
            return;
        }
        if(head->data > dat){
            head = head->left;
        }
        else if(head-> data < dat){
            head = head->right;
        }
    
    }

    
    
    
    struct node *dd= create(dat);
    if(prev->data > dat){
        prev->left = dd;

    }
    else{
        prev->right  = dd;
    }

}

void in_order(struct node *head){
    if(head != NULL){
        in_order(head->left);
        cout<<head->data<<" ";
        in_order(head->right);
    }

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
    insert(root_node , 100);
    in_order(root_node);
    cout<<endl;
 
    
    return 0;
}