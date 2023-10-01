#include<iostream>
using namespace std;
struct queue {
int size;
int r;
int f;
int *arr;
};

int isFull(struct queue *node){
    if((node->r+1) % (node->size)== node->f){
        return 1;
    }
    else 
    return 0;
}
int isEmpty(struct queue *node){
    if(node->f == node->r){
        return 1;
    }
    else 
    return 0;
}

void enqueuq(struct queue *node,int val){
    if(isFull(node)){
        cout<<"Overflow"<<endl;
    }
    else {
        node->r = (node->r+1) % (node->size);
        node->arr[node->r] = val;
        cout<<"Enqueuq element is "<<val<<endl;
    }
}

void dequeue(struct queue *node){
    int a;
    if(isEmpty(node))
    cout<<"UnderFlow"<<endl;
    else{
        node->f = (node->f+1)%node->size;
        a = node->arr[node->f];
        cout<<"Deque element is "<<a<<endl;
    }
}

int main(){
    struct queue *node;
    node->size =4;
    //in CIRCULAR queue we assign F R from 0 so that one element of queuq will always be empty
    //so that there will be no overriding
    // use % for moving in a circular loop
    //over git
    node->f=0;
    node->r = 0;
    node->arr = new int [node->size];

    enqueuq(node,55);
    enqueuq(node,55);
    enqueuq(node,55);
    dequeue(node);
    dequeue(node);
    dequeue(node);
    dequeue(node);
    enqueuq(node,55);
    enqueuq(node,55);
    enqueuq(node,55);
    enqueuq(node,55);
    enqueuq(node,55);
    dequeue(node);
    dequeue(node);
    dequeue(node);
    dequeue(node);
    dequeue(node);
   



    return 0;
}
