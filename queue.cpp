#include<iostream>
using namespace std;

struct queue{
int size;
int f;
int r;
int *arr;
};

int isEmpty(struct queue *node){
    if(node->f == node->r){
        return 1;
    }
    else 
    return 0;
}
int isFull(struct queue *node){
    if(node->r >=node->size){
        return 1;
    }
    else 
    return 0;
}
void enqueue(struct queue *node,int a){
    if(isFull(node)){
        cout<<"Queue is Full"<<endl;
    }
    else {
        node->r++;
    
        node->arr[node->r] = a;
        cout<<"element is added"<<endl;
    }
}

void dequeue(struct queue *node){
    if(isEmpty(node)){
        cout<<"Queue is empty"<<endl;
    }

    else {
            node->f++;
            int a = node->arr[node->f];
            cout<<"Dequeue element is "<<a<<endl;
    }
}

int main(){
    struct queue *my = new queue;
    my->size = 3;
    my->f=-1;
    my->r=-1;
    my->arr = new int[my->size];

    enqueue(my,55);
    enqueue(my,66);
    enqueue(my,77);
    dequeue(my);
    enqueue(my,87);
    dequeue(my);
       
    return 0;
}