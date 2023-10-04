#include<iostream>
using namespace std;

struct node {
    int data;
    struct node * left;
    struct node * right;
};

struct node * create (int dat){
    struct node *dd = new node;
    dd-> data = dat;
    dd->left = NULL;
    dd->right = NULL;
}

void in_order(struct node *head){
    if(head != NULL){
        in_order(head->left);
        cout<<head->data<<" ";
        in_order(head->right);
    }
}
// first we go to left which is 
// the small element than its root
// then we go to extrem right of that node
// so that we will found the biggest available node compare to root node

struct node * in_order_predissor(struct node *head){
    head = head->left;
    while (head->right != NULL)
    {
        head = head->right;
    }
    return head;
    

}

struct node * delete_node(struct node * head ,int dat){
    struct node *prev;
    if(head == NULL ){
        return NULL;
    }
// check that we match the same element
    if(head->left == NULL && head->right == NULL && head->data == dat){
        delete head;
        return NULL;
    }

    if(head->data > dat){
         head->left = delete_node (head->left , dat);
       
    }
    else if(head->data < dat){
       head->right = delete_node(head->right ,dat);

    }
    else{
        prev = in_order_predissor(head);
// moving predissor nodes data to the head node 
// and then we delete the predissor node
// it is indirectly LIKE swapping values
        head->data = prev->data;
       head->left = delete_node(head->left , prev->data);
    }

}
void insert(struct node *head,int dat){
    struct node * prev = NULL;
    while (head != NULL)
    {
        prev = head;
        if(head->data == dat){
            return ;

        }
        if(head->data > dat){
            head = head->left;
        }
        else if(head->data < dat){
            head = head->right;
        }
    }

    struct node *dd = create(dat);
    if(prev->data > dat){
        prev->left = dd;
    }
    else {
        prev->right = dd;
    }
    
}

int main(){
    struct node * root_node=create(50);
    struct node *n1 = create(40);
    struct node *n2= create(60);
    struct node *n3 = create(55); 
    struct node *n4 = create(65);

    //       50
    //      /  \
    //     40   60
    //         /  \ 
    //       55    65    
    //      /  \  /  \ 
    //    54  57  62  68

    //  40 50 54 55 57 60 62 65 68  
    
    root_node->left = n1;
    root_node->right = n2;
    n2->left = n3;
    n2->right = n4;

    in_order(root_node);
    insert(root_node , 30);
    insert(root_node , 100);
    insert(root_node , 75);
    insert(root_node ,20);
    insert(root_node , 18);

    cout<<endl;
    in_order(root_node);
    delete_node(root_node,1000);
    cout<<endl;
    in_order(root_node);
    return 0;
}